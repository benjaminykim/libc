#include "libft.h"

char			*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char *needle_scanner;
	const char *haystack_scanner;
	size_t		len_tracker;

	if (*needle == '\0')
		return ((char *) haystack);
	while (*haystack && len != 0)
	{
		len--;
		haystack_scanner = haystack;
		needle_scanner = needle;
		len_tracker = len;
		while (*needle_scanner == *haystack_scanner && len_tracker != 0)
		{
			len_tracker--;
			needle_scanner++;
			haystack_scanner++;
		}
		if (len_tracker >= 0 && *needle_scanner == '\0')
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
