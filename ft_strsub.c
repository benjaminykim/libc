/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:14:08 by bekim             #+#    #+#             */
/*   Updated: 2020/03/01 05:02:37 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	index;

	dst = ft_memalloc(len + 1);
	index = 0;
	if (dst == NULL || s == NULL)
		return (NULL);
	while (index < start)
	{
		s++;
		index++;
	}
	return (ft_strncpy(dst, s, len));
}
