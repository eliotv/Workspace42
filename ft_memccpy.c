/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:53:22 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/06 14:53:47 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memccpy (void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;
	unsigned char a;

	i = 0;
	a = (unsigned char)c;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (i < n)
	{
		(d[i] = s[i]);
		if (s[i] == a)
			return (d + i + 1);
		i++;
	}
	return(NULL);
}
