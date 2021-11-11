/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:31:45 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 14:30:32 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		last;
	char	*str;

	i = 0;
	j = 0;
	last = 0;
	while (s[i] != '\0')
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			last = ++i;
		else
			i++;
	}
	str = (char *)malloc((i - (i - last)) * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (i < last)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
