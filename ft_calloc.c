#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	ret = malloc(count * size);
	if (!ret || !count || !size)
		return (NULL);
	else
	{
		ft_memset(ret, 0, count * size);
		return (ret);
	}
}
