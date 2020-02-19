/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:13:11 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 20:20:19 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*s1_scanner;
	size_t	index;

	s1_scanner = s1;
	index = 0;
	while (*s1_scanner)
		s1_scanner++;
	while (index < n && *s2)
	{
		*s1_scanner = *s2;
		s1_scanner++;
		s2++;
		index++;
	}
	*s1_scanner = '\0';
	return (s1);
}
