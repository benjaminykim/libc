#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	char			*cpy_ret;
	unsigned int	index;

	ret = ft_strnew(ft_strlen(s));
	if (ret == NULL)
		return (NULL);
	index = 0;
	cpy_ret = ret;
	while (*s)
	{
		*ret = (*f)(index, *s);
		index++;
		ret++;
		s++;
	}
	*ret = '\0';
	return (cpy_ret);
}
