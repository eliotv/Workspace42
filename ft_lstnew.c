/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 09:53:40 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/17 13:52:20 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	if (!content)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		if(!(list->content = malloc(content_size)))
		{	
			free(list);
			return (NULL);
		}
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	list->next = NULL;
	return (list);
}
