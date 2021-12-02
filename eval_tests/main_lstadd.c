/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:37:42 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/12/02 17:18:16 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    	del_add(void *content, size_t size)
{
	(void)size;
	free(content);
}

static void	test_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;

	while (*alst != NULL && alst != NULL)
	{
		current = (*alst)->next;
		(*del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
		*alst = current;
	}
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

void		test_lstadd()
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
        list = test_lstnew(str, sizeof(str));
        list2 = test_lstnew(str2, sizeof(str2));
        list3 = test_lstnew(str3, sizeof(str3));

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
	test_lstdel(&start, &del_add);
}
