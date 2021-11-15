/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:37:20 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/15 13:33:39 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	test_isascii()
{
	int	var;
	int	correct;
	int	user;

	printf("----FT_ISASCII----\n");

	var = 'a';
	correct = isascii(var);
	user = ft_isascii(var);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}

	var = '4';
	correct = isascii(var);
	user = ft_isascii(var);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}

	var = 128;
	correct = isascii(var);
	user = ft_isascii(var);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}
}
