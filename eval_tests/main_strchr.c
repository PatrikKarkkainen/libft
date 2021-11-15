/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:53:04 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/04 12:29:52 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	const char str[] = "Hello World!";
	const char ch = '.';
	char *ret;

	ret = ft_strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);

	return (0);
}
