#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *dst_cpy;
	char *src_cpy;

	dst_cpy = (char *) dst;
	src_cpy = (char *) src;
	while (n)
	{
		*dst_cpy = *src_cpy;
		if (*src_cpy == (unsigned char) c)
			return (dst_cpy + 1);
		dst_cpy++;
		src_cpy++;
		n--;
	}
	return (NULL);
}
