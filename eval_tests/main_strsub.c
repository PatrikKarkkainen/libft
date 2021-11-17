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
	char	*str;
	char	*result;
	char	*correct;
	int	start;
	size_t	len;

	printf("----FT_STRSUB----\n");

	str = "Hello!";
	correct = "el";
	start = 1;
	len = 2;
	result = ft_strsub(str, start, len);
	if (*correct == *result)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", result);
	}
	
	str = "Hello!";
	correct = "l";
	start = 3;
	len = 1;
	result = ft_strsub(str, start, len);
	if (*correct == *result)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", result);
	}
}
