/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 13:43:50 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/17 16:59:23 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_List **alst, void (*del),(void size_t))
{
	del((alst->content, (*alst)->content_size));
	free(*alst);
	*alst = NULL;
}
