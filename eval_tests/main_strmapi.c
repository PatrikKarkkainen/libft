/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:39:23 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 12:29:06 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	ft_toupperchari(unsigned int i,char c)
{
	if ((c >= 'a' && c <= 'z') && (i % 2 == 0))
		c = c - 32;
	return (c);
}

void	test_strmapi()
{
	char	*str;
	char	*correct;
	char	*result;

	printf("----FT_STRMAPI----\n");

	str = "hello!";
	correct = "HeLlO!";
	result = ft_strmapi(str, &ft_toupperchari);
	if (*correct == *result)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", result);
	}
	free(result);
}
