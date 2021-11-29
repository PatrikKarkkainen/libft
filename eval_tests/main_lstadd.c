/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:37:42 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/29 14:56:05 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    del_add(void *content, size_t size)
{
	(void)size;
	free(content);
}

void	test_lstadd()
{
	t_list	*start;
        t_list  *list;
        t_list  *list2;
        t_list  *list3;
        char    *str;
        char    *str2;
        char    *str3;

	printf("----FT_LSTADD----\n");

        str = "Hello";
        str2 = "World!";
        str3 = "Text";
	start = NULL;
        list = ft_lstnew(str, sizeof(str));
        list2 = ft_lstnew(str2, sizeof(str2));
        list3 = ft_lstnew(str3, sizeof(str3));

	ft_lstadd(&start, list2);
	if (*(char *)start->content == *str2)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", str2);
		printf("User: %s\n", (char *)start->content);
	}

	ft_lstadd(&start, list3);
	if (*(char *)start->content == *str3)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", str3);
		printf("User: %s\n", (char *)start->content);
	}

	ft_lstadd(&start, list);
	if (*(char *)start->content == *str)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", str);
		printf("User: %s\n", (char *)start->content);
	}
	ft_lstdel(&start, &del_add);
}
