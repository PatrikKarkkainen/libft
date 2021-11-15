/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:37:40 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/08 11:37:41 by pkarkkai         ###   ########.fr       */
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

	c = 'Z';
	correct = toupper(c);
	printf("Correct: %d\n", correct);

	user = ft_toupper(c);
	printf("User: %d\n", user);
	return(0);
}
