/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:38:18 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 11:46:31 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_memdel()
{
	void	*ptr;

	ptr = (void *)malloc(sizeof(int));
	*(int *)ptr = 42;

	printf("----FT_MEMDEL----\n");

	ft_memdel(&ptr);
	if (ptr == NULL)
		printf("OK\n");
	else
		printf("KO\n");
}
