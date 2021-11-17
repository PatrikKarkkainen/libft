/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:27:19 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/05 13:27:21 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_memcmp()
{
	char	*str1;
	char	*str2;
	int	user;

	printf("----FT_MEMCMP----\n");

	str1 = "ABC";
	str2 = "ABC";
	user = ft_memcmp(str1, str2, 2);
	if (user == 0)
		printf("OK\n");
	else
	{
		printf("Correct: 0\n");
		printf("User: %d\n", user);
	}

	str1 = "t\10";
	str2 = "t\0";
	user = ft_memcmp(str1, str2, 2);
	if (user > 0)
		printf("OK\n");
	else
	{
		printf("Correct: 1\n");
		printf("User: %d\n", user);
	}

	str1 = "AAA";
	str2 = "BBB";
	user = ft_memcmp(str1, str2, 2);
	if (user < 0)
		printf("OK\n");
	else
	{
		printf("Correct: -1\n");
		printf("User: %d\n", user);
	}
}
