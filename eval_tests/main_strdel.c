/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:38:37 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 11:42:56 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test_strdel()
{
	void	*ptr;

	ptr = (void *)malloc(sizeof(int));
	*(int *)ptr = 42;

	printf("----FT_STRDEL----\n");

	ft_memdel(&ptr);
	if (ptr == NULL)
		printf("OK\n");
	else
		printf("KO\n");
}
