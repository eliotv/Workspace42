/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 17:13:08 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/06 18:14:49 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (s1 - s2);
}

int main(void)
{
string str1 = "CS50";
string str2 = "CS50";

printf("Equal: %s\n", ft_strcmp(str1, str2));

str2 = "Rob";

printf("CS50 comes before Rob: %s\n", ft_strcmp(str1, str2));

str2 = "Andrew";

printf("CS50 comes after Andrew: %s\n", ft_strcmp(str1, str2));
}
