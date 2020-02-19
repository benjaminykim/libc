/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:09:54 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 20:24:53 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dst_cpy;
	char *src_cpy;

	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	while (n)
	{
		*dst_cpy = *src_cpy;
		dst_cpy++;
		src_cpy++;
		n--;
	}
	return (dst);
}
