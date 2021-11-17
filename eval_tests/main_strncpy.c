/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:28:40 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/15 13:17:01 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void	test_strncpy()
{
	char *src;
	char correct[50];
	char user[50];

	printf("----FT_STRNCPY----\n");

	src = "Hello World!";
	strncpy(correct, src, 5);
	ft_strncpy(user, src, 5);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
