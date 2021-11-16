/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:32:02 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:32:03 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_toa(int n, char *str, int i)
{
	int	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -n;
		str[0] = '-';
	}
	if (nb > 9)
	{
		ft_toa((nb / 10), str, i - 1);
		ft_toa((nb % 10), str, i);
	}
	if (nb <= 9)
	{
		nb = nb + '0';
		str[i] = nb;
	}
}

static int	ft_size(int n)
{
	int	nb;
	int	size;

	nb = n;
	size = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		size = 1;
		nb = -n;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;

	if (n <= INT_MIN)
		return ("-2147483648");
	size = ft_size(n);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	str[size] = '\0';
	ft_toa(n, str, size - 1);
	return (str);
}
