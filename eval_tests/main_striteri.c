/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:39:04 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:39:05 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_oneplusi(unsigned int n, char *c)
{
	if (n % 2 == 0)
		*c = *c + 1;
}

void	test_striteri()
{
	char	*str;
	char	*correct;

	printf("----FT_STRITERI\n");

	str = (char *)malloc(sizeof(char) * 7);
	strcpy(str, "hello");
	correct = "iemlp";
	ft_striteri(str, &ft_oneplusi);
	if (*correct == *str)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", str);
	}
	free(str);
}

