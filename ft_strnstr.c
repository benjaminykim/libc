/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:13:41 by bekim             #+#    #+#             */
/*   Updated: 2020/02/19 11:07:48 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *haystack, const char *needle,
		size_t len)
{
	const char	*needle_scanner;
	const char	*haystack_scanner;
	size_t		len_tracker;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len != 0)
	{
		haystack_scanner = haystack;
		needle_scanner = needle;
		len_tracker = len + 1;
		while (*needle_scanner == *haystack_scanner && len_tracker-- != 0
				&& *needle_scanner && *haystack_scanner)
		{
			needle_scanner++;
			haystack_scanner++;
		}
		if (*needle_scanner == '\0')
			return ((char *)haystack);
		if (len_tracker == 0)
			return (NULL);
		haystack++;
		len--;
	}
	return (NULL);
}
