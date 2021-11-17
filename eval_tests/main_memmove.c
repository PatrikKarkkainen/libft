/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:23:34 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/05 12:50:51 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_memmove()
{
	char	*src;
	char	correct[50] = "Hello World!";
	char	user[50] = "Hello World!";

	printf("----FT_MEMMOVE----\n");

	src = "new";
	memmove(correct, src, 4);
	ft_memmove(user, src, 4);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
