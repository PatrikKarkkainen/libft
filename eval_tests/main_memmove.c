/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:23:34 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/05 12:50:51 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	char dest[] = "oldstring";
	const char src[]  = "new";
	char *test;

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	test = ft_memmove(dest, src, 2);
	printf("After memmove dest = %s, src = %s\n", dest, src);
	printf("%s\n", test);
	return(0);
}
