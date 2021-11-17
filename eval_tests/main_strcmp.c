/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:36:26 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 12:44:57 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_strcmp()
{
	char	*str1;
	char	*str2;
	int	user;

	printf("----FT_STRCMP----\n");

	str1 = "ABC";
	str2 = "ABC";
	user = ft_strcmp(str1, str2);
	if (user == 0)
		printf("OK\n");
	else
	{
		printf("Correct: 0\n");
		printf("User: %d\n", user);
	}

	str1 = "AAA";
	str2 = "BBB";
	user = ft_strcmp(str1, str2);
	if (user < 0)
		printf("OK\n");
	else
	{
		printf("Correct: -1\n");
		printf("User: %d\n", user);
	}

	str1 = "BBB";
	str2 = "AAA";
	user = ft_strcmp(str1, str2);
	if (user > 0)
		printf("OK\n");
	else
	{
		printf("Correct: 1\n");
		printf("User: %d\n", user);
	}
}
