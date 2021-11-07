/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:27:19 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/05 13:27:21 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char str1[15];
	char str2[15];
	int ret;

	memcpy(str1, "ABCDEF", 6);
	memcpy(str2, "ABCDEN", 6);
	ret = ft_memcmp(str1, str2, 6);
	if(ret > 0)
	{
		printf("str2 is less than str1");
	}
	else if(ret < 0)
	{
		printf("str1 is less than str2");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	return(0);
}
