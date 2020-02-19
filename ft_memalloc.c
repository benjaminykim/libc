/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:09:33 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 20:09:34 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*ret;

	ret = malloc(size);
	if (ret == NULL)
		return (ret);
	ft_bzero(ret, size);
	return (ret);
}
