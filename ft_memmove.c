/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:10:03 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 20:10:03 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char *temp;

	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (temp != NULL)
	{
		ft_memcpy(temp, src, len);
		ft_memcpy(dst, temp, len);
	}
	return (dst);
}
