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

int	main()
{
	void	*ptr;

	ptr = (void *)malloc(sizeof(int));
	*(int *)ptr = 42;

	printf("%d\n", *(int *)ptr);
	ft_memdel(&ptr);
	//free(ptr);
	if (ptr == NULL)
		printf("This is null.");
	else
		printf("This is NOT null");
	return (0);
}
