/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:27:12 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/05 13:27:23 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((char *)str1)[i] != ((char *)str2)[i])
			return (((char *)str1)[i] - ((char *)str2)[i]);
		i++;
	}
	return (((char *)str1)[i] - ((char *)str2)[i]);
}
