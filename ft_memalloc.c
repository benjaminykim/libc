#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*ret;

	ret = malloc(size);
	if (ret == NULL)
		return (ret);
	ft_bzero(ret, size);
	return (ret);
}
