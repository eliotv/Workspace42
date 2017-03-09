/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:13:13 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/05 18:43:03 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!little)
		return ((char*)big);
	while (big[i] && i < n)
	{
		while (big[i] != little[j] && big[i])
			i++;
		while (big[i] == little[j] && big[i] && little[j] && i < n)
		{
			i++;
			j++;
		}
		if (!little [j])
			return ((char*)big);
		else 
			j = 0;
	}
	return (0);
}
