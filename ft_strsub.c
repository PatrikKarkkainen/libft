/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:31:23 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 13:08:59 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	str = (char *)malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (0);
	i = start;
	while ((size_t)i < (len + start) && s[i] != '\0')
	{
		str[i - start] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
