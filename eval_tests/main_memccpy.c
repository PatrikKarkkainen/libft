/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:38:39 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/05 12:06:35 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_memccpy()
{
	char *src;
	char correct[50];
	char user[50];

	printf("----FT_MEMCCPY----\n");

	src = "Hello World!";
	memccpy(correct, src, 87, 13);
	ft_memccpy(user, src, 87, 13);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}

	src = "Hello\0World!";
	memccpy(correct, src, 0, 13);
	ft_memccpy(user, src, 0, 13);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
