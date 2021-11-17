/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:40:32 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:40:33 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strsplit()
{
	int	i;
	char	c;
	char	*str;
	char	**arr;
	char	*correct[2];

	printf("----FT_STRSPLIT----\n");

	i = 0;
	c = '*';
	str = "Hello*World!";
	correct[0] = "Hello";
	correct[1] = "World!";
	arr = ft_strsplit(str, c);
	while (arr[i])
	{
		if (*arr[i] != *correct[i])
		{
			printf("Correct: %s\n", correct[i]);
			printf("User: %s\n", *arr);
			return;
		}
		i++;
	}
	printf("OK\n");
}
