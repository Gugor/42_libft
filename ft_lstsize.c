

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *tmp;
    t_list *aux;
    size_t i;

    tmp = lst;
    i = 0;
    if (lst ==  NULL)
        return (0);
    while (tmp->next != NULL)
    {
        aux = tmp->next;
        tmp = aux;
        i++;
    }
    return (i + 1);
}
