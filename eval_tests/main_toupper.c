/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:37:40 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:37:41 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	test_toupper()
{
	char 	c;
	int 	correct;
	int 	user;

	printf("----FT_TOUPPER----\n");

	c = 'f';
	correct = toupper(c);
	user = ft_toupper(c);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}

	c = '3';
	correct = toupper(c);
	user = ft_toupper(c);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}
}
