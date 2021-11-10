/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:39:04 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:39:05 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_toup(unsigned int n,char *c)
{
	if (n % 2 == 0)
		write(1, &c[0], 1);
}

int	main()
{
	char	*str;
	char	n;

	str = "hello!";
	n = '\n';
	ft_striteri(str, &ft_toup);
	write(1, &n, 1);
	return (0);
}
