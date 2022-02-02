#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *head;

	while(*lst)
	{
		head = *lst->next;
		del(*lst->content);
		free(*lst);
		*lst = head;
	}
}

