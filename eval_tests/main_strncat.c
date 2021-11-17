/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:20:59 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/03 14:24:34 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_strncat()
{
	char	src[50] = "World!";
	char	correct[50] = "Hello ";
	char	user[50] = "Hello ";

	printf("----FT_STRNCAT----\n");

	strncat(correct, src, 2);
	ft_strncat(user, src, 2);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
