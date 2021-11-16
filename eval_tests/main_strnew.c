/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:38:27 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:38:29 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	size_t	size;
	char	*str;

	size = 0;
	str = ft_strnew(size);
	str[0] = '4';
	str[1] = '2';
	str[2] = '\0';
	printf("%s\n", str);
	return (0);
}
