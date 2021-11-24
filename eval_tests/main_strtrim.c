/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:40:23 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 14:30:47 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strtrim()
{
	char	*str;
	char	*result;
	char	*correct;

	printf("----FT_STRTRIM----\n");

	str = "  Hello World  d";
	correct = "Hello Worldd";
	result = ft_strtrim(str);
	if (*correct == *result)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", result);
	}
	free(result);
}
