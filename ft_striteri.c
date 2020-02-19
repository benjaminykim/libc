/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:12:36 by bekim             #+#    #+#             */
/*   Updated: 2020/02/19 13:10:05 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int index;

	if (s == NULL || f == NULL)
		return ;
	index = 0;
	while (*s)
	{
		(*f)(index, s);
		s++;
		index++;
	}
}
