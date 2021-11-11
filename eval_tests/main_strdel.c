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

int	main()
{
	char	*ptr = NULL;

	ptr = (char *)malloc(3);
	ptr[0] = '4';
	ptr[1] = '2';
	ptr[2] = '\0';

	printf("%s\n", ptr);
	ft_strdel(&ptr);
	//free(ptr);
	if (ptr == NULL)
		printf("Pointer is null.");
	else
		printf("Pointer is NOT null.");
	return (0);
}
