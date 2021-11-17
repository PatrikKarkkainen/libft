/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:53:04 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/04 12:29:52 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test_strchr()
{
	char	str[] = "Hello World!";
	char	ch = 'o';
	char	*correct;
	char	*user;

	printf("----FT_STRCHR----\n");

	correct = strchr(str, ch);
	user = ft_strchr(str, ch);
	if (*correct == *user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", correct);
		printf("User: %s\n", user);
	}
}
