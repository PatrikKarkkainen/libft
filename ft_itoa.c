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

void	ft_toa(int n, char *str, int i)
{
	int	nb;

	nb = n;
	if (n < 0)
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

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		size;

	len = n;
	if (n == 0)
		size = 1;
	if (n < 0)
	{
		size = 1;
		len = -n;
	}
	while (len != 0)
	{
		len = len / 10;
		size++;
	}
	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	str[size] = '\0';
	ft_toa(n, str, size - 1);
	return (str);
}
