/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:09:21 by bekim             #+#    #+#             */
/*   Updated: 2020/03/01 05:12:31 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*copy;
	void		*content_cpy;

	copy = (t_list *)malloc(sizeof(t_list));
	if (copy == NULL)
		return (NULL);
	if (!content)
	{
		copy->content = NULL;
		copy->content_size = 0;
	}
	else
	{
		content_cpy = (void *)malloc(sizeof(content_size));
		copy->content = ft_memcpy(content_cpy, content, content_size);
		copy->content_size = content_size;
	}
	copy->next = NULL;
	return (copy);
}
