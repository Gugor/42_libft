

#include "../libft.h"

int main(void)
{
    //Test 3:
    int t3_num = 3;
    char *t3_description = "null content";
    char *t3_content = NULL;

    printf("\33[1;33mPreparing list...\33[1;0m\n");
    printf("\33[1;30m.....................................\33[1;0m\n");
    t_list *t3_list = ft_lstnew(t3_content);
    printf("\33[1;34m->[TEST %i] : %s\33[1;0m\n", t3_num, t3_description);
    printf("\n");
    printf("\33[1;37m== Inputs:\33[1;0m\n");
    printf("\33[1;32m:: char\33[1;0m content = \33[1;36m\"%s\";\33[\n", t3_content);
    printf("\n");
    printf("\33[1;37m== Result: \33[1;0m \n");
    printf("\33[1;33m[[Expected]]:\33[1;0m\n:: content-> \33[1;36m\"%s\"\33[1;0m\n:: next-> \33[1;36m%s\33[1;0m\n", t3_content, "(null)");
    printf("\33[1;31m[[Yours]]:\33[1;0m\n   content-> \33[1;36m\"%s\"\33[1;0m\n   next-> \33[1;36m%s\33[1;0m\n", t3_list->content, (char *)t3_list->next);
    printf(".....................................\n");
    //Test 2:
    int t2_num = 2;
    char *t2_description = "empty string";
    char *t2_content = "";

    printf("\33[1;33mPreparing list...\33[1;0m\n");
    printf("\33[1;30m.....................................\33[1;0m\n");
    t_list *t2_list = ft_lstnew(t2_content);
    printf("\33[1;34m->[TEST %i] : %s\33[1;0m\n", t2_num, t2_description);
    printf("\n");
    printf("\33[1;37m== Inputs:\33[1;0m\n");
    printf("\33[1;32m:: char\33[1;0m content = \33[1;36m\"%s\";\33[\n", t2_content);
    printf("\n");
    printf("\33[1;37m== Result: \33[1;0m \n");
    printf("\33[1;33m[[Expected]]:\33[1;0m\n:: content-> \33[1;36m\"%s\"\33[1;0m\n:: next-> \33[1;36m%s\33[1;0m\n", t2_content, "(null)");
    printf("\33[1;31m[[Yours]]:\33[1;0m\n   content-> \33[1;36m\"%s\"\33[1;0m\n   next-> \33[1;36m%s\33[1;0m\n", t2_list->content, (char *)t2_list->next);
    printf(".....................................\n");
    //Test 1:
    int t1_num = 1;
    char *t1_description = "basic input";

    char *t1_content = "This is a content";

    printf("\33[1;33mPreparing list...\33[1;0m\n");
    printf("\33[1;30m.....................................\33[1;0m\n");
    t_list *t1_list = ft_lstnew(t1_content);
    printf("\33[1;34m->[TEST %i] : %s\33[1;0m\n", t1_num, t1_description);
    printf("\n");
    printf("\33[1;37m== Inputs:\33[1;0m\n");
    printf("\33[1;32m:: char\33[1;0m content = \33[1;36m\"%s\";\33[\n", t1_content);
    printf("\n");
    printf("\33[1;37m== Result: \33[1;0m \n");
    printf("\33[1;33m[[Expected]]:\33[1;0m\n:: content-> \33[1;36m\"%s\"\33[1;0m\n:: next-> \33[1;36m%s\33[1;0m\n", t1_content, "(null)");
    printf("\33[1;31m[[Yours]]:\33[1;0m\n   content-> \33[1;36m\"%s\"\33[1;0m\n   next-> \33[1;36m%s\33[1;0m\n", t1_list->content, (char *)t1_list->next);
    printf(".....................................\n");
    printf("\n");
}
