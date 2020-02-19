#include "libft.h"

void			ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*temp;

	while (*lst)
	{
		temp = *lst;
		(*del)(temp->content);
		free(*lst);
		*lst = temp->next;
	}
}
