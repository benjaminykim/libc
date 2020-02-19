/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:13:22 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 20:25:18 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*cpy;
	size_t	count;

	count = 0;
	cpy = dst;
	while (count < len)
	{
		*cpy = *src;
		cpy++;
		if (*src)
			src++;
		count++;
	}
	return (dst);
}
