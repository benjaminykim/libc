/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:13:06 by bekim             #+#    #+#             */
/*   Updated: 2020/02/19 14:48:33 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	char			*cpy_ret;
	unsigned int	index;

	if (s == NULL)
		return (NULL);
	ret = ft_strnew(ft_strlen(s));
	if (ret == NULL || f == NULL)
		return (NULL);
	index = 0;
	cpy_ret = ret;
	while (*s)
	{
		*ret = (*f)(index, *s);
		index++;
		ret++;
		s++;
	}
	*ret = '\0';
	return (cpy_ret);
}
