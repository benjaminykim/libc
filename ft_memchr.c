#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	while (*((char *) s) && n)
	{
		if ((unsigned char) *((char *) s) == (unsigned char) c)
			return ((void *) s);
		s++;
		n--;
	}
	return (NULL);
}
