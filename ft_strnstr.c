/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:13:13 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/05 18:43:03 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!little)
		o
	while (i < len )
	{
		if (big[i] == little[j])
			j++;
		i++;
	}
	if (little[j] == '\0')
		return ((char*)little + len);
	else if (!little)
	return (0);
}

int main(void)
{
	const char haystack[12] = "foo bar baz";
	const char needle [4] = "bar";
	const char str2[12] = "foo bar baz";
	const char str[4] = "bar";

	printf("%s\n%s\n", (char*)ft_strnstr(haystack, needle, 9), (char*)strnstr(str2, str, 9));
}
