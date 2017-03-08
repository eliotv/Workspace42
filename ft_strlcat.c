#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char *s;
	char *d;
	size_t i;
	size_t len;

	d = dst;
	s = src;
	i = size;
	len = 0;
	while (i != 0 && d != '\0')
	{
		i--;
		d++;
	}
	len = d - dst;
	i = size - len;
	if (i == 0)
		return (len + ft_strlen(s));
	while (*s != '\0')
	{
		if (i != 1)
		{
			*d = *s;
			d++;
			i--;
		}
		s++;
	}
	*d = '\0';
	return (len + (s - src));
}
