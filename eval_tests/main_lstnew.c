/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:26:44 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/26 15:42:52 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void test_lstnew()
{
	t_list *list;
	char	*str;
	int	i;

	printf("----FT_LSTNEW----\n");

	str = "Hello World!";
	i = 42;

	list = ft_lstnew(str, (sizeof(str)));
	if (*(char *)list->content == *str)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", str);
		printf("User: %s\n", (char *)list->content);
	}
	if (list->content_size == (size_t)sizeof(str))
		printf("OK\n");
	else
	{
		printf("Correct: %zd\n", (size_t)sizeof(str)),
		printf("User: %zd\n", list->content_size);
	}
	free (list->content);
	free (list);

	list = ft_lstnew(&i, (sizeof(i)));
	if (*(int *)list->content == i)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", i);
		printf("User: %d\n", *(int *)list->content);
	}

	if (list->next == NULL)
		printf("OK\n");
	else
		printf("Next is not set to null!\n");
	if (list->content_size == (size_t)sizeof(i))
		printf("OK\n");
	else
	{
		printf("Correct: %zd\n", (size_t)sizeof(i)),
		printf("User: %zd\n", list->content_size);
	}
	free (list->content);
	free (list);
}
