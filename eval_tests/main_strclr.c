/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strclr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:38:48 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:38:50 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strclr()
{
	char	str[] = "Hello World!";
	char	*correct;

	printf("----FT_STRCLR----\n");

	correct = "";
	ft_strclr(str);
	if (*correct == *str)
		printf("OK\n");
	else
		printf("KO\n");
}
