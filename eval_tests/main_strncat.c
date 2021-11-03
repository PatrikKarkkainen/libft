/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:20:59 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/03 14:24:34 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	char src[50], dest[50];
	char *test;

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	test = ft_strncat(dest, src, 5);

	printf("Final destination string : |%s|", dest);

	return(0);
}
