/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:37:47 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:37:48 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main ()
{
	char 	c;
	int 	correct;
	int 	user;

	c = 'F';
	correct = tolower(c);
	printf("Correct: %d\n", correct);

	user = ft_tolower(c);
	printf("User: %d\n", user);
	return(0);
}
