/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:12:41 by bekim             #+#    #+#             */
/*   Updated: 2020/02/19 13:03:47 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char *dst;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dst = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, s1);
	ft_strcpy(dst + ft_strlen(s1), s2);
	*(dst + ft_strlen(s1) + ft_strlen(s2)) = 0;
	return (dst);
}
