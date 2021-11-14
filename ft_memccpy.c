/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:44:34 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/05 12:05:16 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)src)[i] != '\0' && i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		if (((char *)src)[i] == c)
			return (dest + (i + 1));
		i++;
	}
	if (((char *)src)[i] != '\0')
	{
		while (((char *)dest)[i] != '\0')
			i++;
	}
	((char *)dest)[i] = '\0';
	return (0);
}
