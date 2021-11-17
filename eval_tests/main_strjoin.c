/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:40:03 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 13:35:52 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strjoin()
{
	char	*str1;
	char	*str2;
	char	*correct;
	char	*result;

	printf("----FT_STRJOIN----\n");

	str1 = "Hello ";
	str2 = "World!";
	correct = "Hello World!";
	result = ft_strjoin(str1, str2);
	if (*correct == *result)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", result);
	}
}
