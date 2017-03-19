/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <evanheum@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 09:34:29 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/19 09:42:08 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *first;
	t_list *prev;
	t_list *new;

	first = NULL;
	if (lst != NULL)
	{
		first = ft_lstnew(lst->content, list->content_size);
		if (first == NULL)
			return (NULL);
		first = f(first);
		prev = first;
		lst = lst->next;
	}
	return (first);
}
