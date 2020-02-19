#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	char	*cpy_ret;

	ret = ft_strnew(ft_strlen(s));
	if (ret == NULL)
		return (NULL);
	cpy_ret = ret;
	while (*s)
	{
		*ret = (*f)(*s);
		ret++;
		s++;
	}
	*ret = '\0';
	return (cpy_ret);
}
