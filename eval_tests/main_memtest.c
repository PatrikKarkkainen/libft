/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memtest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:40:32 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/04 13:15:36 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main ()
{
	char str[50];
	char *test;

	strcpy(str,"This is string.h library function");
	puts(str);

	test = ft_memset(str,'$',0);
	puts(str);
	puts(test);

	return(0);
}
