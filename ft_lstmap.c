/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:09:16 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 22:25:02 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;

	ret = NULL;
	if (f && lst)
	{
		ret = (*f)(lst);
		if (ret && lst->next)
			ret->next = ft_lstmap(lst->next, f);
	}
	return (ret);
}
