/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:53:56 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/05 12:43:57 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)src)[i] != '\0' && i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	if (((char *)src)[i] != '\0')
	{
		while (((char *)dest)[i] != '\0')
			i++;
	}
	((char *)dest)[i] = '\0';
	return (dest);
}
