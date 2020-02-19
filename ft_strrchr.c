/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:06:17 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 20:25:28 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	int i;
	int char_index;

	i = 0;
	char_index = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			char_index = i;
		i++;
	}
	if (!c)
		return ((char*)s + i);
	if (c && (char_index != 0 || *s == (char)c))
		return ((char*)s + char_index);
	return (NULL);
}
