/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:38:57 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:38:59 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_oneplus(char *c)
{
	*c = *c + 1;
}

void	test_striter()
{
	char	*str;
	char	*correct;

	printf("----FT_STRITER\n");

	str = (char *)malloc(sizeof(char) * 7);
	strcpy(str, "hello");
	correct = "ifmmp";
	ft_striter(str, &ft_oneplus);
	if (*correct == *str)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", str);
	}
	free(str);
}
