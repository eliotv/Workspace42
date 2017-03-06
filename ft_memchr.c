/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 19:41:10 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/05 17:11:35 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	size_t i;
	unsigned ch;

	i = 0;
	ch = (unsigned char)c;
	str = (unsigned char*)s;
	while (i < n && str[i] != ch)
			i++;
		return ((void *)s + i);

	return (0);
}
