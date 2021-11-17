/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:39:32 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 12:43:53 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strequ()
{
	char	*str1;
	char	*str2;
	int	user;

	printf("----FT_STREQU----\n");

	str1 = "ABC";
	str2 = "ABC";
	user = ft_strequ(str1, str2);
	if (user == 1)
		printf("OK\n");
	else
	{
		printf("Correct: 1\n");
		printf("User: %d\n", user);
	}

	str1 = "AAA";
	str2 = "BBB";
	user = ft_strequ(str1, str2);
	if (user == 0)
		printf("OK\n");
	else
	{
		printf("Correct: 0\n");
		printf("User: %d\n", user);
	}
}
