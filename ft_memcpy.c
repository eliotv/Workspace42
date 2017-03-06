/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 14:47:42 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/02 17:45:28 by evanheum         ###   ########.fr       */
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

int main()
{
	char str[10];
	char str2[10] = "abcdefghij";
	char str3[10];
	char str4[10] = "abcdefghij";

	ft_memcpy(str, str2, 5);
	memcpy(str3, str4, 5);
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	ft_putstr(str3);
	ft_putchar('\n');
	ft_putstr(str4);
	ft_putchar('\n');
	return (0);
}
