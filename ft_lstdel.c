#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*current_node;
	t_list		*next_node;

	current_node = *alst;
	if (del)
	{
		while (current_node)
		{
			next_node = (current_node->next);
			ft_lstdelone(&current_node, del);
			current_node = next_node;
		}
	}
	alst = NULL;
}
