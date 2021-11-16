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


int main ()
{
	const char haystack[20] = "Hello There World!";
	const char needle[20] = "There";
	char *answer;
	char *user;
	int	n;

	n = 11;
	answer = strnstr(haystack, needle, n);
	printf("Correct: %s\n", answer);

	user = ft_strnstr(haystack, needle, n);
	printf("User: %s\n", user);
	return(0);
}
