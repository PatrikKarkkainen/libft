/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:42:33 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/04 15:00:18 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	int	i;
	char c;
    
	i = 425;
	while(i >= 10)
    {
        i = i / 10;
    }
	c = i + '0';
	write(1, &c, 1);
	return (0);
}
