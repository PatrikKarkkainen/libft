/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:40:43 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:40:45 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_itoa()
{
	int	i;
	char	*correct;
	char	*user;

	printf("----FT_ITOA----\n");

	i = 12;
	correct = "12";
	user = ft_itoa(i);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
	free(user);

	i = -42;
	correct = "-42";
	user = ft_itoa(i);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
	free(user);

	i = 0;
	correct = "0";
	user = ft_itoa(i);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
	free(user);
}
