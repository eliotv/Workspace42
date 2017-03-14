/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 18:24:50 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/13 21:01:53 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_c(int count, char *str, char c)
{
	count = 0;

	if (*str == c)
		str++;
	if (*str != c)
	{
		count++;
		str++;
	}
	return (count);
}

static char ft_malloc_count(char *str)
{
	str = (char*)malloc(ft_count_c);
}

char **ft_strsplit(char const *s, char c)
{

