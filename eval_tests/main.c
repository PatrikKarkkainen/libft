/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:41:36 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/15 12:59:37 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_atoi();
void	test_bzero();

int		main()
{
	test_atoi();
	test_bzero();
	return (0);
}

void	test_atoi()
{
	char *str;
	int correct;
	int user;

	printf("----FT_ATOI----\n");

	str = "-42";
	correct = atoi(str);
	user = ft_atoi(str);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("KO\n");
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}

	str = "\v\f\r-2147483648";
	correct = atoi(str);
	user = ft_atoi(str);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("KO\n");
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}

	str = "++++++--------256";
	correct = atoi(str);
	user = ft_atoi(str);
	if (correct == user)
		printf("OK\n");
	else
	{
		printf("KO\n");
		printf("Correct: %d\n", correct);
		printf("User: %d\n", user);
	}
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
