/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:27:06 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/04 13:39:18 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>

void	test_bzero()
{
	void	*correct;
	void	*user;

	printf("----FT_BZERO----\n");

	correct = (void *)malloc(sizeof(*correct) * 5);
	if (correct == NULL)
		return ;
	user = (void *)malloc(sizeof(*user) * 5);
	if (user == NULL)
		return ;
	memset(correct, 'a', 3);
	memset(user, 'a', 3);
	bzero(correct, 3);
	ft_bzero(user, 3);
	if (*(char *)correct == *(char *)user)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", (char *)correct);
		printf("User: %s\n", (char *)user);
	}
	free(correct);
	free(user);
}
