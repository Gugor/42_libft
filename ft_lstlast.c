

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *tmp;

    tmp = lst;
    if (lst == NULL)
        return (lst);
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    return (tmp);
    
}
