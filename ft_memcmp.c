#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char *) s1;
	str2 = (char *) s2;
	if (!n)
		return (0);
	while ((unsigned char) *str1 == (unsigned char) *str2 && n)
	{
		n--;
		str1++;
		str2++;
	}
	if (n == 0)
		return (0);
	return (unsigned char) *str1 - (unsigned char) *str2;
}
