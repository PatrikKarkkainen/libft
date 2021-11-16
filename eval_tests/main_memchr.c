/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:07:38 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/05 13:14:08 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	const char str[] = "Hello World!";
	const char ch = 'o';
	char *ret;

	ret = ft_memchr(str, ch, 2);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return(0);
}
