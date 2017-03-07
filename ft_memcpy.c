/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 14:47:42 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/06 10:57:46 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	size_t i;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
