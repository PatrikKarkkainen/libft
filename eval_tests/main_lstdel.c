/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:59:23 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/29 14:27:36 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int result;

void    del(void *content, size_t size)
{
        (void)size;
        free(content);
	result++;
}

void    test_lstdel()
{
        t_list  *list;
        t_list  *list2;
        t_list  *list3;
        char    *str;
        char    *str2;
        char    *str3;

        printf("----FT_LSTDEL----\n");

        str = "Hello";
        str2 = "World!";
        str3 = "Text";
        list = ft_lstnew(str, sizeof(str));
        list2 = ft_lstnew(str2, sizeof(str2));
        list3 = ft_lstnew(str3, sizeof(str3));
        list->next = list2;
        list2->next = list3;
	result = 0;
        ft_lstdel(&list2, &del);
        if (*(char *)list->content == *str)
                printf("OK\n");
        else
        {
                printf("Correct: %s\n", str);
                printf("User: %s\n", (char *)list->content);
        }
        if (list2 == NULL)
                printf("OK\n");
        else
                printf("%s\n", (char *)list2->content);
	if (result == 2)
		printf("OK\n");
	else
		printf("Incorrect amount of frees!\n");
        free (list->content);
        free (list);
}

