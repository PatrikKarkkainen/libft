/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:36:35 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 12:53:15 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_strncmp()
{
	char	*str1;
	char	*str2;
	int	user;

	printf("----FT_STRNCMP----\n");

	str1 = "ABC";
	str2 = "ABC";
	user = ft_strncmp(str1, str2, 2);
	if (user == 0)
		printf("OK\n");
	else
	{
		printf("Correct: 0\n");
		printf("User: %d\n", user);
	}

	str1 = "AAA";
	str2 = "BBB";
	user = ft_strncmp(str1, str2, 2);
	if (user < 0)
		printf("OK\n");
	else
	{
		printf("Correct: -1\n");
		printf("User: %d\n", user);
	}

	str1 = "BBB";
	str2 = "AAA";
	user = ft_strncmp(str1, str2, 2);
	if (user > 0)
		printf("OK\n");
	else
	{
		printf("Correct: 1\n");
		printf("User: %d\n", user);
	}
}
