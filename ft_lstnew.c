

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *newlst;
    
    newlst = ft_calloc(1, sizeof(t_list));
    if (!newlst)
        return (NULL);
    newlst->content = content;
    newlst->next = NULL;
    return (newlst);
}
