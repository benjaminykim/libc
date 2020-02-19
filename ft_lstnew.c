/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:09:21 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 20:52:20 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*copy;

	copy = (t_list *)malloc(sizeof(t_list));
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	if (!content)
	{
		copy->content = NULL;
		copy->content_size = 0;
	}
	else
	{
		copy->content = (void *)content;
		copy->content_size = content_size;
	}
	copy->next = NULL;
	return (copy);
}
