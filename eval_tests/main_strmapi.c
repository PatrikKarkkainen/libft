/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:39:23 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 12:29:06 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	ft_toup(unsigned int i,char c)
{
	if ((c >= 'a' && c <= 'z') && (i % 2 == 0))
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
	result = ft_strmapi(str, &ft_toup);
	printf("%s\n", result);
	return (0);
}
