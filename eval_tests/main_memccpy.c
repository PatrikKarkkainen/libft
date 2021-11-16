/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:38:39 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/05 12:06:35 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	const char src[50] = "World Hello!0";
	char dest[50];
	char *test;

	strcpy(dest,"Helooo");
	printf("Before memccpy dest = %s\n", dest);
	test = memccpy(dest, src, 48, 20);
	printf("After memccpy dest = %s\n", dest);
	printf("%s\n", test);

	strcpy(dest,"Helooo");
	printf("Before memccpy dest = %s\n", dest);
	test = ft_memccpy(dest, src, 48, 20);
	printf("After memccpy dest = %s\n", dest);
	printf("%s\n", test);

	return(0);
}
