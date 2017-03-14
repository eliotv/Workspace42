/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <evanheum@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 10:02:38 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/13 21:04:25 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_count_int_len(int n)
{
	size_t i;
	i = 2;
	if (n == 0)
	{
	  n = 0;
	  return (i);
	}
	if ( n < 0)
		i++;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char *str;
	long  num;
	size_t len;

	len = ft_count_int_len(n);
	num = n;
	str = (char*)malloc(len);
	if (!str)
		return (0);
	len--;
	str[len] = '\0';
	if ( num == 0)
	  str[0] = '0';
	if (num < 0)
	{
	  num *= -1;
	  str[0] = '-';
	}
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
