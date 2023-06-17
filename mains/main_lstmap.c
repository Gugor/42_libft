/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:40:29 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/17 22:00:36 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}

void    ft_del(void *content)
{
	free(content);
}

static void print_nodes(t_list **list)
{
    t_list *lst = *list;
    while (lst->next)
    {
        printf("\33[1;33m:: Node\33[1;0m (%p): \n\33[1;35m  >> content->\33[1;0m \33[1;36m%s\33[1;0m\n\33[1;35m  >> next->\33[1;0m \33[1;36m%p\33[1;0m \n",lst, lst->content, lst->next);
        lst = lst->next;
    }
        printf("\33[1;33m:: Node\33[1;0m (%p): \n\33[1;35m  >> content->\33[1;0m \33[1;36m%s\33[1;0m\n\33[1;35m  >> next->\33[1;0m \33[1;36m%p\33[1;0m \n",lst, lst->content, lst->next);
}

int main(void)
{
	//Test 1
    //== Test Variable
    int t1_num = 1;
    char *t1_description = "basic input 3 node list";
    //== Variables
    t_list *t1_lst = ft_lstnew("Hola!");
    ft_lstadd_back(&t1_lst,ft_lstnew("como estas?"));
    ft_lstadd_back(&t1_lst,ft_lstnew("Fin dialogo?"));
    //== Print test
    printf(".......................................................\n");
    printf("\33[1;34m[TEST %i] : %s\33[1;0m\n", t1_num, t1_description);
	t_list *t1_maped = ft_lstmap(t1_lst, &ft_map, &ft_del);
    print_nodes(&t1_maped);
    printf(".......................................................\n");
    printf("\n");
	return(0);
}
