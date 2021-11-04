/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:33:00 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/04 12:45:03 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	index;

	i = 0;
	index = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			index = i;
		i++;
	}
	if (index == -1)
		return (0);
	else
		return ((char *)&str[index]);
}
