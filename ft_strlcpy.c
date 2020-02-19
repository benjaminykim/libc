#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		index;

	index = 0;
	if (!dstsize)
		return ((size_t) ft_strlen(src));
	while (index < dstsize - 1 && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = 0;
	return ((size_t) ft_strlen(src));
}
