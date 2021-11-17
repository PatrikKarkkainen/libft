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
	char *str1;
	char *str2;
	int ret;

	str1 = "t\200";
	str2 = "t\0";
	ret = ft_memcmp(str1, str2, 2);
	printf("%d\n", ret);
	return(0);
}
