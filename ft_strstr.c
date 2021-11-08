/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:27:09 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 12:15:06 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && needle[j] != '\0')
	{
		if (haystack[i] != needle[j])
			j = 0;
		else
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i - (len - 1)]);
		i++;
	}
	return (0);
}
