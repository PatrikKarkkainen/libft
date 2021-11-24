/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:48:14 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/04 11:32:40 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

void	test_strlcat()
{
	char	*src;
	char	*correct;
	char	user[50];

	printf("----FT_STRLCAT----\n");

	src = "Hello World!";
	correct = "Hello World!";
	user[0] = '\0';
	ft_strlcat(user, src, 5);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
