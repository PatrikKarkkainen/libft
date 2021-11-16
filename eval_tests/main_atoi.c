/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:36:43 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/15 13:18:30 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
