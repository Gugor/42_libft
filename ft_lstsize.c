

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *tmp;
    size_t i;

    tmp = lst;
    i = 0;
    if (lst ==  NULL)
        return (0);
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
        i++;
    }
    return (i + 1);
}
