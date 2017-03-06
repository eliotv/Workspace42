/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 10:07:30 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/05 17:13:46 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *str;

	i = 0;
	str = (unsigned char*)b;
	while (i < len)
	{
		if(str[i] != len)
		{
			str[i] = (unsigned char)c;
			i++;
		}
	}
	return (b);
}
