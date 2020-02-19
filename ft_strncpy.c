#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	char *cpy;
	size_t count;

	count = 0;
	cpy = dst;
	while (count < len)
	{
		*cpy = *src;
		cpy++;
		if (*src)
			src++;
		count++;
	}
	return dst;
}
