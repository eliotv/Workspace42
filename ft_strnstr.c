/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:13:13 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/08 21:49:10 by evanheum         ###   ########.fr       */
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
	while (*big && i < len)
	{
		while (*big != *little && *big != '\0')
			big++;
		while (*big == *little && *big && *little && i < len)
		{	
			big++;
			little++;
		}
	}
	if (little == '\0')
		return ((char*)big);
	return (0);
}
