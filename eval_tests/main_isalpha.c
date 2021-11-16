/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:36:55 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/15 13:26:23 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	test_isalpha()
{
	int	var;
	int	correct;
	int	user;

	printf("----FT_ISALPHA----\n");

	var = 'a';
	correct = isalpha(var);
	user = ft_isalpha(var);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}
	
	var = '4';
	correct = isalpha(var);
	user = ft_isalpha(var);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}

	var = '#';
	correct = isalpha(var);
	user = ft_isalpha(var);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}
}
