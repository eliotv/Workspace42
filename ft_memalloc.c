/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 15:36:11 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/09 16:33:21 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memallo(size_t size)
{
	void *mal;
	mal = malloc(size);
	if (mal != 0)
		return (0);
	ft_bzero(mal, size);
	return (mal);
}
