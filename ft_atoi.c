/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 14:25:29 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/08 17:41:56 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int answer;
	int pos_neg;

	answer = 0;
	pos_neg = 1;
	while(*str == '\t' || *str == '\n'|| *str == '\r' || *str == '\v' 
			|| *str == '\f' || *str == ' ')
		str++;
	if (*str == '-')
	{
		pos_neg = -1;
		str++;
	}
	else if(*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{	
		answer = answer * 10 + (*str - '0');
		str++;
	}
	return (answer * pos_neg);
}
