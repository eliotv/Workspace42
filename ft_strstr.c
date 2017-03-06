/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:57:47 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/05 18:51:47 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (big[i] != '\0')
	{
		if(big[i] == little[j])
			j++;
		i++;
	}
	if (little[j] == '\0')
		return ((char*)little +i );
	else if (!little)
		return ((char*)big);
	return (0);
}

int main(void)
{
	const char haystack[12] = "foo bar baz";
	const char needle [4] = "bar";
	const char str2[12] = "foo bar baz";
	const char str[4] = "bar";

	printf("%s\n%s\n", (char*)ft_strstr(haystack, needle), (char*)strstr(str2, str));
}
