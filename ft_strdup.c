/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 17:15:06 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/10 13:39:09 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t i;
	size_t len;
	char *str;

	i = 0;
	len = ft_strlen((char*)s1);
	str = (char*)malloc((len + 1) * sizeof(*s1));
	if (!str)
		return (0);
	while (i <= len)
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
