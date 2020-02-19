/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:14:17 by bekim             #+#    #+#             */
/*   Updated: 2020/02/19 13:06:23 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		size;
	char	*str;

	if (s == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (is_set(s[start]))
	{
		start++;
	}
	while (is_set(s[end]) && end >= start)
	{
		end--;
	}
	size = end - start;
	str = ft_strnew(size + 1);
	if (str == NULL)
		return (NULL);
	ft_strncpy(str, s + start, size + 1);
	return (str);
}
