/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:09:01 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 22:17:19 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst && del)
	{
		(*del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
