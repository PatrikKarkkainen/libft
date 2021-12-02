/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:18:29 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/12/02 17:28:55 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void		del_map(void *content, size_t size)
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

t_list		*lst_map(t_list *elem)
{
	int	i;
	t_list	*new;

	i = 0;
	new = test_lstnew(elem->content, elem->content_size);
	if (new == NULL)
		return (0);
	while (((char *)new->content)[i])
	{
		((char *)new->content)[i] = 'O';
		i++;
	}
	return (new);
}

void		test_lstmap()
{
	t_list	*list;
	t_list	*list2;
	t_list	*list3;
	t_list	*result;
	t_list	*tmpresult;
	char	*str;
	char	*str2;
	char	*str3;
	char	*answer;
	char	*answer2;

	printf("----FT_LSTMAP----\n");

	str = "Hello!";
	str2 = "World!";
	str3 = "Text!";
	answer = "OOOOOO";
	answer2 = "OOOOO";
	list = test_lstnew(str, sizeof(str));
	list2 = test_lstnew(str2, sizeof(str2));
	list3 = test_lstnew(str3, sizeof(str3));
	list->next = list2;
	list2->next = list3;
	result = ft_lstmap(list, &lst_map);
	tmpresult = result;
	if (*(char *)result->content == *answer)
		printf("OK\n");
	else
	{
		printf("Correct: OOOOOO\n");
		printf("User: %s\n", (char *)result->content);
	}
	result = result->next;
	if (*(char *)result->content == *answer)
		printf("OK\n");
	else
	{
		printf("Correct: OOOOOO\n");
		printf("User: %s\n", (char *)result->content);
	}
	result = result->next;
	if (*(char *)result->content == *answer2)
		printf("OK\n");
	else
	{
		printf("Correct: OOOOO\n");
		printf("User: %s\n", (char *)result->content);
	}
	free(list->content);
	free(list);
	free(list2->content);
	free(list2);
	free(list3->content);
	free(list3);
	test_lstdel(&tmpresult, &del_map);
}
