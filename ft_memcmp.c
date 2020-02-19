/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:09:47 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 20:19:32 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!n)
		return (0);
	while ((unsigned char)*str1 == (unsigned char)*str2 && n)
	{
		n--;
		str1++;
		str2++;
	}
	if (n == 0)
		return (0);
	return (unsigned char)*str1 - (unsigned char)*str2;
}
