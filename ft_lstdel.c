/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 16:35:25 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/17 16:59:15 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *tmp;
	t_list *list;

	list = *alst;
	while (list != NULL)
	{
	del((alst->, (*alst)->content_size));
	free(*alst);
	*alst = NULL;
}
