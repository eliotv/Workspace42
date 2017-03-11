/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:13:13 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/11 12:38:26 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t l;

	l = 0;
	j = 0;
	i = 0;
	if (!*little)
		return ((char*)big);
	while (big[i] && i < len)
	{
		while (big[l] != little[j] && big[l])
			l++;
		i = l;
		while (big[i] == little[j] && big[i] && little[j] && i < len)
		{
			i++;
			j++;
		}
		if (!little [j])
			return ((char*)big + l);
	}
	return (0);
}

