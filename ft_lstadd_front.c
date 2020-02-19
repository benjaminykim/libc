#include "libft.h"

void		ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list *temp;

	if (*alst == NULL)
		*alst = new;
	else
	{
		temp = *alst;
		*alst = new;
		new->next = temp;
	}
}
