/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 17:53:25 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/05 18:22:59 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;
	size_t i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = len - 1;
	while (i <= len)
	{
		d[i] = s[i];
		i--;
	}
	return (d);
}
