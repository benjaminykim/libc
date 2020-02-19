/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:09:39 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 22:30:25 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *dst_cpy;
	char *src_cpy;

	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	while (n)
	{
		*dst_cpy = *src_cpy;
		if ((unsigned char)*src_cpy == (unsigned char)c)
			return (dst_cpy + 1);
		dst_cpy++;
		src_cpy++;
		n--;
	}
	return (NULL);
}
