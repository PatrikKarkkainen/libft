/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:39:15 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 12:23:47 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	ft_toupperchar(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

void	test_strmap()
{
	char	*str;
	char	*correct;
	char	*result;

	printf("----FT_STRMAP----\n");

	str = "hello!";
	correct = "HELLO!";
	result = ft_strmap(str, &ft_toupperchar);
	if (*correct == *result)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", result);
	}
	free(result);
}
