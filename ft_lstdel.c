/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:08:47 by bekim             #+#    #+#             */
/*   Updated: 2020/02/18 22:20:26 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*next_node;

	if (del)
	{
		while (*alst)
		{
			next_node = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = next_node;
		}
	}
	alst = NULL;
}
