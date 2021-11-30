/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:16:47 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/11/30 16:09:39 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*result;

	tmp = f(lst);
	new = ft_lstnew(tmp->content, tmp->content_size);
	free(tmp->content);
	free(tmp);
	if (new == NULL)
		return (0);
	result = new;
	lst = lst->next;
	while (lst != NULL)
	{
		tmp = (*f)(lst);
		result->next = ft_lstnew(tmp->content, tmp->content_size);
		if (result->next == NULL)
			return (0);
		lst = lst->next;
		result = result->next;
		free(tmp->content);
		free(tmp);
	}
	return (new);
}
