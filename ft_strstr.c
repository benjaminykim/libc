/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:14:03 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 21:56:51 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	const char *needle_scanner;
	const char *haystack_scanner;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		haystack_scanner = haystack;
		needle_scanner = needle;
		while (*needle_scanner == *haystack_scanner && *needle_scanner)
		{
			needle_scanner++;
			haystack_scanner++;
		}
		if (*needle_scanner == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
