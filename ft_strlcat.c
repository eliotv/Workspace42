/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 12:30:29 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/08 16:55:05 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	if (size == 0)
		return (i);
	if (size + ft_strlen(src) > ft_strlen(src) + ft_strlen(dst))
		len = ft_strlen(src) + ft_strlen(dst);
	else
		len = ft_strlen(src) + size;
	if (ft_strlen(dst) < size -1 && size !=0)
	{
		while (*dst)
		{
			dst++;
			i++;
		}
		while (*src && i++ < size - 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (len);
}
