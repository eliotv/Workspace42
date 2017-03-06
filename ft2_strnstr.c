/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft2_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 17:52:59 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/05 18:22:06 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft2_strnstr(const char *big, const char *little, size_t n)
{

		while (big != '\0')
		{
			if (big == little)
				return ((char*)little + n);
			else if (!little)
				return ((char*)big);
			return (NULL);
		}
}

int main(void)
{
	const char haystack[12] = "foo bar baz";
    const char needle [4] = "bar";
    const char str2[12] = "foo bar baz";
	const char str[4] = "bar";

	printf("%s\n%s\n", (char*)ft_strnstr(haystack, needle, 9), (char*)strnstr(str2, str, 9));
}
