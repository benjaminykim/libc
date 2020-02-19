/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:09:43 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 21:52:49 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if ((unsigned char)*((char *)s) == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}
