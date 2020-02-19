#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char *temp;

	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (temp != NULL)
	{
		ft_memcpy(temp, src, len);
		ft_memcpy(dst, temp, len);
	}
	return (dst);
}
