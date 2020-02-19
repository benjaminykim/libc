#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	index;

	dst = ft_memalloc(len + 1);
	index = 0;
	if (dst == NULL)
		return (NULL);
	while (index < start)
	{
		s++;
		index++;
	}
	return (ft_strncpy(dst, s, len));
}
