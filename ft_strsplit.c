/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:31:53 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/15 12:29:56 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_splitlen(char const *s, char c)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		result++;
	}
	return (result);
}

int		ft_strcount(char const *s, char c)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			result++;
			i = i + ft_splitlen(&s[i], c);
		}
		else
			i++;
	}
	return (result);
}

char	*ft_strcopy(char *dest, const char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] != c && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	arr = (char **)malloc((ft_strcount(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			arr[j] = (char *)malloc((ft_splitlen(&s[i], c) + 1) * sizeof(char));
			if (arr[j] == NULL)
				return (0);
			ft_strcopy(arr[j], &s[i], c);
			i += ft_splitlen(&s[i], c);
			j++;
		}
		else
			i++;
	}
	arr[j] = 0;
	return (arr);
}
