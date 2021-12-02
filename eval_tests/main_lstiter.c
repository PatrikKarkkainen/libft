/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:29:10 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/12/02 17:25:39 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void		list_iter(t_list *elem)
{
	int	i;

	i = 0;
	while (((char *)elem->content)[i])
	{
		((char *)elem->content)[i] = 'A';
		i++;
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

void		test_lstiter()
{
	t_list	*list;
	t_list	*list2;
	t_list	*list3;
	char	*str;
	char	*str2;
	char	*str3;
	char	*answer;
	char	*answer2;

	printf("----FT_LSTITER----\n");

	str = "Hello!";
	str2 = "World!";
	str3 = "Text!";
	answer = "AAAAAA";
	answer2 = "AAAAA";
	list = test_lstnew(str, sizeof(str));
	list2 = test_lstnew(str2, sizeof(str2));
	list3 = test_lstnew(str3, sizeof(str3));
	list->next = list2;
	list2->next = list3;
	ft_lstiter(list, &list_iter);
	if (*(char *)list->content == *answer)
		printf("OK\n");
	else
	{
		printf("Correct: AAAAAA\n");
		printf("User: %s\n", (char *)list->content);
	}
	if (*(char *)list2->content == *answer)
		printf("OK\n");
	else
	{
		printf("Correct: AAAAAA\n");
		printf("User: %s\n", (char *)list2->content);
	}
	if (*(char *)list3->content == *answer2)
		printf("OK\n");
	else
	{
		printf("Correct: AAAAAA\n");
		printf("User: %s\n", (char *)list3->content);
	}
	free(list->content);
	free(list);
	free(list2->content);
	free(list2);
	free(list3->content);
	free(list3);
}
