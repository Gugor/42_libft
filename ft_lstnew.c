

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *newlst;
    
    newlst = ft_calloc(2, sizeof(newlst));
    if (!newlst)
        return (NULL);
    newlst->content = content;
    newlst->next = NULL;
    return (newlst);
}
