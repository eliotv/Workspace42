/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 10:04:38 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/05 17:11:56 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;
	size_t i;

	str1 =(unsigned char*)s1;
	str2 =(unsigned char*)s2;
	i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (n);
		i++;
	}
	return (0);
}

