/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:52:48 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/04 14:10:40 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_memcpy()
{
	char *src;
	char correct[50];
	char user[50];

	printf("----FT_MEMCPY----\n");

	src = "Hello World!";
	memcpy(correct, src, 13);
	ft_memcpy(user, src, 13);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}

	src = "Hello\0World!";
	memcpy(correct, src, 13);
	ft_memcpy(user, src, 13);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
