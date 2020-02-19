#include "libft.h"

void			ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int index;

	index = 0;
	while (*s)
	{
		(*f)(index, s);
		s++;
		index++;
	}
}
