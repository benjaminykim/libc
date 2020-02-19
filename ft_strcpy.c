#include "libft.h"

char *ft_strcpy(char *dst, const char *src)
{
	char *cpy;

	cpy = dst;
	while (*src)
	{
		*cpy = *src;
		cpy++;
		src++;
	}
	*cpy = *src;
	return dst;
}
