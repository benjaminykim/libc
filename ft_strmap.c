/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:13:01 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 20:13:01 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	char	*cpy_ret;

	ret = ft_strnew(ft_strlen(s));
	if (ret == NULL)
		return (NULL);
	cpy_ret = ret;
	while (*s)
	{
		*ret = (*f)(*s);
		ret++;
		s++;
	}
	*ret = '\0';
	return (cpy_ret);
}
