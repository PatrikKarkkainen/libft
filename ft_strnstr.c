/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:27:23 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 12:29:58 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	j = 0;
	little_len = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && little[j] != '\0' && i < len)
	{
		if (big[i] != little[j])
			j = 0;
		else
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i - (little_len - 1)]);
		i++;
	}
	return (0);
}
