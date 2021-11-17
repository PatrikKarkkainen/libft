/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:36:09 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 12:15:38 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_strstr()
{
	const char haystack[20] = "Hello There World!";
	const char needle[20] = "There";
	char *correct;
	char *user;

	printf("----FT_STRSTR----\n");

	correct = strstr(haystack, needle);
	user = ft_strstr(haystack, needle);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
