#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char *dst;

	dst = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_strcpy(dst, s1);
	ft_strcpy(dst + ft_strlen(s1), s2);
	*(dst + ft_strlen(s1) + ft_strlen(s2)) = 0;
	return (dst);
}
