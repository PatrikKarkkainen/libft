/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:52:48 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/04 14:10:40 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	const char src[50] = "World";
	char dest[50];
	strcpy(dest,"Heloooo");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, 7);
	printf("After memcpy dest = %s\n", dest);

	return(0);
}
