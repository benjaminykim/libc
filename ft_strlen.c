#include "libft.h"

int			ft_strlen(const char *s)
{
	int count;
	const char *str;

	count = 0;
	str = s;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
