#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if(!lst[0])
	{
		lst[0] = new;
		return ;
	}
	t_list *last;
	last = ft_lstlast(lst[0]);
	last->next = new;
}

