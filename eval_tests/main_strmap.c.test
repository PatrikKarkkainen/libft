/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:39:15 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 12:23:47 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	ft_toup(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int	main()
{
	char	*str;
	char	*result;
	char	n;

	str = "hello!";
	n = '\n';
	result = ft_strmap(str, &ft_toup);
	printf("%s\n", result);
	return (0);
}
