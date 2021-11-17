/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:07:38 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/05 13:14:08 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_memchr()
{
	char *str;
	char ch;
	char *correct;
	char *user;

	printf("----FT_MEMCHR----\n");

	str = "Hello World!";
	ch = 'o';
	correct = memchr(str, ch, 6);
	user = ft_memchr(str, ch, 6);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}

	str = "Hello World!";
	ch = 'p';
	correct = memchr(str, ch, 3);
	user = ft_memchr(str, ch, 3);
	if (user == NULL)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
