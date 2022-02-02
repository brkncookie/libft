#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *). void (*del)(void *))
{
	while(lst)
	{
		ft_lstnew(f(lst->content));
		del(lst->content);
 		lst = lst->next;
	}
}

