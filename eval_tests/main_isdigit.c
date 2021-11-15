/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:37:02 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/15 13:36:29 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	test_isdigit()
{
	int	var;
	int	correct;
	int	user;

	printf("----FT_ISDIGIT----\n");

	var = 'a';
	correct = isdigit(var);
	user = ft_isdigit(var);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}

	var = '4';
	correct = isdigit(var);
	user = ft_isdigit(var);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}

	var = '#';
	correct = isdigit(var);
	user = ft_isdigit(var);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}
}
