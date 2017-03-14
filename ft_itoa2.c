#include "libft.h"

static size_t ft_count_int_len(int n)
{
	size_t i;
	i = 1;
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
	if (n < 0)
	{
		num = -n;
		len++;
	}
	str = ft_strnew(len);
	if (!str)
		return (0);
	while (--len > 0)
	{
		str[len] = num % 10;
		num = num / 10;
	}
	return (str);
}
