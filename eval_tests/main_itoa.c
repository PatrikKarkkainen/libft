/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:40:43 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:40:45 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	int	i;
	char	*str;

	i = -42;
	str = ft_itoa(i);
	printf("%s\n", str);
	return (0);
}
