/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:38:27 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:38:29 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strnew()
{
	size_t	size;
	char	*str;
	char	*correct;

	printf("----FT_STRNEW----\n");

	size = 3;
	correct = "42";
	str = ft_strnew(size);
	str[0] = '4';
	str[1] = '2';
	str[2] = '\0';
	if (*correct == *str)
		printf("OK\n");
	else
		printf("KO\n");
	free(str);
}
