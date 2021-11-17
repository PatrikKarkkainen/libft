/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:52:40 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/03 12:05:03 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strlen()
{
	int	result;
	char	*str;

	printf("----FT_STRLEN----\n");

	str = "123";
	result = ft_strlen(str);
	if (result == 3)
		printf("OK\n");
	else
	{
		printf("Correct: 3\n");
		printf("User: %d\n", result);
	}

	str = "";
	result = ft_strlen(str);
	if (result == 0)
		printf("OK\n");
	else
	{
		printf("Correct: 0\n");
		printf("User: %d\n", result);
	}
}
