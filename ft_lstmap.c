/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:16:30 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/17 21:47:19 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void ft_print_nodes(t_list **list)
{
    t_list *lst = *list;
    while (lst->next)
    {
        printf("\33[1;33m:: Node\33[1;0m (%p): \n\33[1;35m  >> content->\33[1;0m \33[1;36m%s\33[1;0m\n\33[1;35m  >> next->\33[1;0m \33[1;36m%p\33[1;0m \n",lst, lst->content, lst->next);
        lst = lst->next;
    }
        printf("\33[1;33m:: Node\33[1;0m (%p): \n\33[1;35m  >> content->\33[1;0m \33[1;36m%s\33[1;0m\n\33[1;35m  >> next->\33[1;0m \33[1;36m%p\33[1;0m \n",lst, lst->content, lst->next);
}*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*node;
	t_list	*new;
	void *content;

	node = lst;
	newlist = NULL;
	while (node)
	{
		content = (void *)f(node->content);
		new = ft_lstnew(f(content));
		if (!new)
		{
			ft_lstclear(&newlist, del);
			return (NULL);	
		}
		ft_lstadd_back(&newlist,new);
		new = NULL;
		node = node->next;
	}	
	return (newlist);
}
