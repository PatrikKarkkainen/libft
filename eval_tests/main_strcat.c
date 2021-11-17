/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:06:03 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/03 14:10:04 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_strcat()
{
	char	src[50] = "World!";
	char	correct[50] = "Hello ";
	char	user[50] = "Hello ";

	printf("----FT_STRCAT----\n");

	strcat(correct, src);
	ft_strcat(user, src);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
