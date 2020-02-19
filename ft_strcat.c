#include "libft.h"

char*		ft_strcat(char *restrict s1, const char *restrict s2)
{
	ft_strcpy(&s1[ft_strlen(s1)], s2);
	return (s1);
}
