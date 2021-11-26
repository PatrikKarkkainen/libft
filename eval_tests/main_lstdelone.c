/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:40:59 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/26 15:36:21 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	del(void *content, size_t size)
{
	(void)size;
	free(content);
}

void	test_lstdelone()
{
	t_list	*list;
	t_list	*list2;
	t_list	*list3;
	char	*str;
	char	*str2;
	char	*str3;

	printf("----FT_LSTDELONE----\n");

	str = "Hello";
	str2 = "World!";
	str3 = "Text";
	list = ft_lstnew(str, sizeof(str));
	list2 = ft_lstnew(str2, sizeof(str2));
	list3 = ft_lstnew(str3, sizeof(str3));
	list->next = list2;
	list2->next = list3;
	ft_lstdelone(&list2, &del);
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
	if (*(char *)list3->content == *str3)
		printf("OK\n");
	else
	{
		printf("Correct: %s\n", str3);
		printf("User: %s\n", (char *)list3->content);
	}
	free (list->content);
	free (list);
	free (list3->content);
	free (list3);
}
