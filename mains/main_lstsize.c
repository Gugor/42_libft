

#include "../libft.h"

int main(void)
{
    //Test 1:
    //== Test Variables
    int t1_num = 1;
    char *t1_description = "lista con 4 nodos";
    
    //== Variables
    printf("Creating list...\n");
    t_list *t1_lst = ft_lstnew((void *) 1);
    printf("List created...\n");
    ft_lstadd_front(&t1_lst, (void *) 2);
    ft_lstadd_front(&t1_lst, (void *) 3);
    ft_lstadd_front(&t1_lst, (void *) 4);
    ft_lstadd_front(&t1_lst, (void *) 5);
    printf("Nodes added...\n");
    printf("\33[1;34m->[TEST %i] : %s\33[1;0m\n",t1_num, t1_description);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    if(t1_lst)
        free(t1_lst);
    return (0);
}
