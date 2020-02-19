#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*ret;

	ret = NULL;
	if (f && lst)
	{
		ret = (*f)(lst->content);
		if (ret && lst->next)
			ret->next = ft_lstmap(lst->next, f);
	}
	return (ret);
}
