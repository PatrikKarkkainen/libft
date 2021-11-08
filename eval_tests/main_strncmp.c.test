/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:36:35 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 12:53:15 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	char str1[15] = "abc";
	char str2[15] = "abC";
	int	correct;
	int	user;
	int	n;

	n = 3;
	correct = strncmp(str1, str2, n);
	printf("Correct: %d\n", correct);

	user = ft_strncmp(str1, str2, n);
	printf("User: %d\n", user);
	return(0);
}
