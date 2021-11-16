/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:41:36 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/15 13:38:35 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_atoi();
void	test_bzero();
void	test_isalnum();
void	test_isalpha();
void	test_isascii();
void	test_isdigit();
void	test_isprint();

int		main()
{
//	test_atoi();
//	test_bzero();
//	test_isalnum();
//	test_isalpha();
//	test_isascii();
//	test_isdigit();
	test_isprint();
	return (0);
}

void	test_bzero()
{
	char *correct;
	char *user;

	printf("----FT_BZERO----\n");

	correct = "Hello World!";
	user = "Hello World!";
	bzero(correct, 2);
	ft_bzero(user, 1);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}