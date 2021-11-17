/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:31:35 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/04 12:46:24 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_strrchr()
{
	char	str[] = "Hello World!";
	char	ch = 'o';
	char	*correct;
	char	*user;

	printf("----FT_STRRCHR----\n");

	correct = strrchr(str, ch);
	user = ft_strrchr(str, ch);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
