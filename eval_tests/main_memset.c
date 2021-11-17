/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memtest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:40:32 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/04 13:15:36 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	test_memset()
{
	char	correct[50] = "Hello World!";
	char	user[50] = "Hello World!";

	printf("----FT_MEMSET----\n");

	memset(correct, '$', 2);
	ft_memset(user, '$', 2);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
