#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *) ft_memalloc(size + 1);
	return (str);
}
