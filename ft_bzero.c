/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 13:55:57 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/05 17:06:52 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *str;

	i = 0;
	str = (unsigned char*)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
