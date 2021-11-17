/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:37:59 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:38:00 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_memalloc()
{
	int	size;
	char	*str;

	printf("----FT_MEMALLOC----\n");

	size = 10;
	str = (char *)ft_memalloc(size);
	if (str)
		printf("OK\n");
	else
		printf("KO\n");
}
