/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:36:18 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 12:31:12 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_strnstr()
{
	const char haystack[20] = "Hello There World!";
	const char needle[20] = "There";
	char *correct;
	char *user;

	correct = strnstr(haystack, needle, 15);
	user = ft_strnstr(haystack, needle, 15);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
