/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 18:24:50 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/17 10:40:18 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_c(char const *str, char c)
{
	int		count;

	count = 0;
	while (*str == c && *str != '\0')
		str++;
	while (*str != c && *str != '\0')
	{
	  count++;
	  str++;
	}
	return (count);
}


static int ft_count_wrd(char const swrd[], char c)
{
	int count;
	const char *s;

	s = swrd;
	count = 0;
	while (*s)
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
			count++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	int k;
	int r;

	char  **ary;
	int wordcount;
	if (!s || !c)
		return (0);
	wordcount = ft_count_wrd(s, c);
	if (!(ary = ((char**)malloc(sizeof(char*) * (wordcount + 1)))))
			return (NULL);
	r = 0;
	while (wordcount--)
	{
		ary[r] = ((char*)malloc(sizeof(char) * (ft_count_c(s, c) + 1)));
		if (!ary[r])
			return (NULL);
		k = 0;
		while (*s == c && *s != '\0')
			s++;
		while (*s != c && *s != '\0')
			ary[r][k++] = *s++;
		ary[r][k] = '\0';
		r++;
	}
	ary[r] = NULL;
	return (ary);
}
