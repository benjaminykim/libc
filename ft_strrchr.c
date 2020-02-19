#include "libft.h"

int				exists(const char *s, int c)
{
	while(*s)
	{
		if (*s == (char) c)
			return (1);
		s++;
	}
	return (0);
}

char			*ft_strrchr(const char *s, int c)
{
	int i;
	int char_index;

	i = 0;
	char_index = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			char_index = i;
		i++;
	}
	if (!c)
		return ((char *) s + i);
	if (c && (char_index != 0 || *s == (char) c))
		return ((char *) s + char_index);
	return (NULL);
}
