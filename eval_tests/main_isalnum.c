/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:37:10 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/15 13:31:18 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	test_isalnum()
{
	int	var;
	int	correct;
	int	user;

	printf("----FT_ISALNUM----\n");

	var = 'a';
	correct = isalnum(var);
	user = ft_isalnum(var);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}

	var = '4';
	correct = isalnum(var);
	user = ft_isalnum(var);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}

	var = '#';
	correct = isalnum(var);
	user = ft_isalnum(var);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}
}
