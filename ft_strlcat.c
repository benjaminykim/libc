#include "libft.h"

size_t		ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	index;
	size_t	source_index;

	index = 0;
	source_index = 0;
	while (index < dstsize && dst[index])
		index++;
	while (source_index + index + 1 < dstsize && src[source_index])
	{
		dst[index + source_index] = src[source_index];
		source_index++;
	}
	if (index != dstsize)
		dst[index + source_index] = '\0';
	return (index + ft_strlen(src));
}
