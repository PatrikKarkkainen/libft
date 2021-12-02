/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:59:23 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/12/02 17:20:20 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int result;

void		del(void *content, size_t size)
{
	(void)size;
	free(content);
	result++;
}

static t_list	*test_lstnew(void const *content, size_t content_size)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return (0);
	if (content == NULL)
	{
		head->content = NULL;
		head->content_size = 0;
	}
	else
	{
		head->content = (void *)malloc(sizeof(*(head->content)) * content_size);
		if (head->content == NULL)
		{
			free (head);
			return (0);
		}
		head->content = ft_memcpy(head->content, content, content_size);
		head->content_size = content_size;
		head->next = NULL;
	}
	return (head);
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
        list = test_lstnew(str, sizeof(str));
        list2 = test_lstnew(str2, sizeof(str2));
        list3 = test_lstnew(str3, sizeof(str3));
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

