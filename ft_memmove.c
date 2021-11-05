/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:28:18 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/05 12:47:50 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str1)[i] = ((char *)str2)[i];
		i++;
	}
	if (((char *)str2)[i] != '\0')
	{
		while (((char *)str1)[i] != '\0')
			i++;
	}
	return (str1);
}
