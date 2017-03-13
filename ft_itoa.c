/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <evanheum@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 10:02:38 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/13 10:21:13 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_get_int_str(int n)
{
	size_t i;
	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int value)
{
	char *str;
	int num;
	size_t s_len;

	slen = ft_get_int_str(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		s_len++;
	}
	str = 

