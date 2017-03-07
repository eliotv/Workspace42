/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 17:15:06 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/06 16:50:15 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int i;
	char *str;

	i = 0;
   str = (char*)malloc(ft_strlen((char*)s1) * sizeof(str));
   while (str[i] != '\0')
   {
	   str[i] = s1[i];
	   i++;
   }
   return (str);
}	   
