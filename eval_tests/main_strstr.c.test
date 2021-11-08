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


int main ()
{
	const char haystack[20] = "Hello There World!";
	const char needle[20] = "There";
	char *answer;
	char *user;

	answer = strstr(haystack, needle);
	printf("Correct: %s\n", answer);

	user = ft_strstr(haystack, needle);
	printf("User: %s\n", user);
	return(0);
}
