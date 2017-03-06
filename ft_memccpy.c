/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:53:22 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/05 17:11:02 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memccpy (void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	size_t i;

	i = 0;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (i < n && s[i] != (unsigned char)c)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
