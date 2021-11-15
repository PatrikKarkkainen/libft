/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:39:50 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 13:10:38 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	*str;
	char	*result;
	int		start;
	size_t	len;

	str = "Hello!";
	start = 3;
	len = 5;
	result = ft_strsub(str, start, len);
	printf("%s\n", result);
	return (0);
}
