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
	char	**arr;
	char	**correct;

	printf("----FT_STRSPLIT----\n");

	i = 0;
	c = '*';
	correct = (char **)malloc(sizeof(char *) * 2);
	correct[0] = (char *)malloc(sizeof(char) * 6);
	correct[1] = (char *)malloc(sizeof(char) * 7);
	ft_strcpy(correct[0], "Hello");
	ft_strcpy(correct[1], "World!");
	if (!(arr = ft_strsplit("Hello*World", c)))
		return ;
	else
	{
		while (arr[i])
		{
			if (*arr[i] != *correct[i])
			{
				printf("Correct: %s\n", correct[i]);
				printf("User: %s\n", *arr);
				return;
			}
			free(arr[i]);
			free(correct[i]);
			i++;
		}
	}
	printf("OK\n");
	free(arr);
	free(correct);
}
