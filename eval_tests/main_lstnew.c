/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:26:44 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/26 14:01:17 by pkarkkai         ###   ########.fr       */
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
	free (list);

	list = ft_lstnew(&i, (sizeof(i)));
	if (*(int *)list->content == i)
		printf("OK\n");
	else
	{
		printf("Correct: %d\n", i);
		printf("User: %d\n", *(int *)list->content);
	}
	free (list);
}
