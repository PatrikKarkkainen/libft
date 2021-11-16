/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:54:24 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/03 13:14:06 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main () {
   char src[20];
   char dest[5];
   char *test;
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "Hello World!");
   test = ft_strcpy(dest, src);

   printf("Final copied string : %s\n", test);
   
   return(0);
}
