/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:39:50 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 13:10:38 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strsub()
{
	char	*result;
	char	*correct;

	printf("----FT_STRSUB----\n");

	correct = "el";
	result = ft_strsub("Hello", 1, 2);
	if (*correct == *result)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", result);
	}
	free(result);
	result = NULL;

	correct = "l";
	result = ft_strsub("Hello", 3, 1);
	if (*correct == *result)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", result);
	}
	free(result);
	result = NULL;
}
