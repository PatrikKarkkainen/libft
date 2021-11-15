/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:36:26 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 12:44:57 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	char str1[15] = "Nbcdef";
	char str2[15] = "NABCDEF";
	int	correct;
	int	user;

	correct = strcmp(str1, str2);
	printf("Correct: %d\n", correct);

	user = ft_strcmp(str1, str2);
	printf("User: %d\n", user);
	return(0);
}
