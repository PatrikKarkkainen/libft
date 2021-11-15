/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:27:06 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/04 13:39:18 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main()
{
	char str[50] = "This is a string";

	puts(str);
	ft_bzero(&str[5], 1);
	puts(str);
	return (0);
}
