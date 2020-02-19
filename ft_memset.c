#include "libft.h"

void			*ft_memset(void *b, int c, size_t len)
{
	char *cpy;

	cpy = (char *) b;
	while (len)
	{
		*cpy = (char) c;
		cpy++;
		len--;
	}
	return (b);
}
