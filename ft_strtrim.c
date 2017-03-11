/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 10:40:30 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/11 14:26:34 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int len;
	char *str;
	if (!s)
		return (0);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	len = ft_strlen(s);
	if (len == 0)
		return ("\0");
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	ft_bzero(str, len + 1);
	i = -1;
	while (++i < len)
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
