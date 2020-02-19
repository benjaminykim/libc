#include "libft.h"

int			is_set(char c, char const *set)
{
	char	*trim_char;

	trim_char = (char *) set;
	while (*trim_char)
	{
		if (*trim_char == c)
			return (1);
		trim_char++;
	}
	return (0);
}

char		*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		end;
	int		size;
	char	*str;

	start = 0;
	end = ft_strlen(s) - 1;
	while (is_set(s[start], set))
	{
		start++;
	}
	while (is_set(s[end], set) && end >= start)
	{
		end--;
	}
	size = end - start;
	str = ft_strnew(size + 1);
	ft_strncpy(str, s + start, size + 1);
	return (str);
}
