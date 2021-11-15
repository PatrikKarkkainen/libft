/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:39:32 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/11 12:43:53 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	*str1;
	char	*str2;
	int		result;

	str1 = "AA";
	str2 = "AA";
	result = ft_strequ(str1, str2);
	printf("%d\n", result);
	return (0);
}
