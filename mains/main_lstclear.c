/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:56:04 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/17 17:24:37 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
	print_nodes(&t1_lst);
	printf(".......................................................\n");
	printf("\n");
	return (0);
}
