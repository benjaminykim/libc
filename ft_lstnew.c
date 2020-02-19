#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list		*copy;

	copy = (t_list *)malloc(sizeof(t_list));
	if (copy == NULL)
		return (NULL);
	if (!content)
		copy->content = NULL;
	else
	{
		copy->content = content;
	}
	copy->next = NULL;
	return (copy);
}
