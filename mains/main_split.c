/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:39:35 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/13 19:06:21 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void ft_print2dchar(char **arrstr)
{
	int i;

	i = 0;
	while (arrstr[i])
	{
		printf(">> %s\n",arrstr[i]);
		i++;
	}
    printf(">> Null(%i * %lu) = %d\n",i + 1,sizeof(arrstr[i]),arrstr[i] == NULL);
}

int main (void)
{
	//Test 11
    printf("zxi\n\33[1;34mTest 11: \n");
    char *t11_s = "      split       this for   me  !       ";
    char t11_c     = ' ';

    printf("\33[1;37mInputs:\33[1;0m\n");
    printf("\33[1;32mchar\33[1;0m s[] = \33[1;36m\"%s\"\33[1;0m\n",t11_s);
    printf("\33[1;32mchar\33[1;0m c = \33[1;36m\'%c\'\33[1;0m\n\n",t11_c);
    printf("Result:\n");
    char **t11_result = ft_split(t11_s,t11_c);
    ft_print2dchar(t11_result);
	//Test 10
    printf("asi\n\33[1;34mTest 10: normal input with \';\' as character separator\n");
    char *t10_s = NULL;
    char t10_c     = 0;

    printf("\33[1;37mInputs:\33[1;0m\n");
    printf("\33[1;32mchar\33[1;0m s[] = \33[1;36m\"%s\"\33[1;0m\n",t10_s);
    printf("\33[1;32mchar\33[1;0m c = \33[1;36m\"%c\"\33[1;0m\n\n",t10_c);
    printf("Result:\n");
    char **t10_result = ft_split(t10_s,t10_c);
    ft_print2dchar(t10_result);
	//Test 1
	printf("i\n\33[1;34mTest 1: normal input with \';\' as character separator\n");
	char t1_s[50] = "this;is;\tmy;\nfirst; string";
	char t1_c     = ';';

	printf("\33[1;37mInputs:\33[1;0m\n");
	printf("\33[1;32mchar\33[1;0m s[] = \33[1;36m\"%s\"\33[1;0m\n",t1_s);
	printf("\33[1;32mchar\33[1;0m c = \33[1;36m\"%c\"\33[1;0m\n\n",t1_c);
	printf("Result:\n");
	char **t1_result = ft_split(t1_s,t1_c);
	ft_print2dchar(t1_result);

	//Test 2
    printf("\n\33[1;34mTest 2: s is full of c\n");
    char t2_s[50] = "     ";
    char t2_c     = ' ';

    printf("\33[1;37mInputs:\33[1;0m\n");
    printf("\33[1;32mchar\33[1;0m s[] = \33[1;36m\"%s\"\33[1;0m\n",t2_s);
    printf("\33[1;32mchar\33[1;0m c = \33[1;36m\"%c\"\33[1;0m\n\n",t2_c);
    printf("Result:\n");
	char **t2_result = ft_split(t2_s,t2_c);
	ft_print2dchar(t2_result);
	//Test 3
    printf("\n\33[1;34mTest 3: one word input\n");
    char t3_s[50] = "string";
    char t3_c     = ':';

    printf("\33[1;37mInputs:\33[1;0m\n");
    printf("\33[1;32mchar\33[1;0m s[] = \33[1;36m\"%s\"\33[1;0m\n",t3_s);
    printf("\33[1;32mchar\33[1;0m c = \33[1;36m\"%c\"\33[1;0m\n\n",t3_c);
    printf("Result:\n");
	char **t3_result = ft_split(t3_s,t3_c);
	ft_print2dchar(t3_result);
	
	//Test 4
    printf("\n\33[1;34mTest 4: one word input multiple saparator before\n");
    char t4_s[50] = ":::::::print";
    char t4_c     = ':';

    printf("\33[1;37mInputs:\33[1;0m\n");
    printf("\33[1;32mchar\33[1;0m s[] = \33[1;36m\"%s\"\33[1;0m\n",t4_s);
    printf("\33[1;32mchar\33[1;0m c = \33[1;36m\"%c\"\33[1;0m\n\n",t4_c);
    printf("Result:\n");
	char **t4_result = ft_split(t4_s,t4_c);
    ft_print2dchar(t4_result);

	//Test 5
    printf("\n\33[1;34mTest 4: phrase input space saparator\n");
    char t5_s[100] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
    char t5_c     = ' ';

    printf("\33[1;37mInputs:\33[1;0m\n");
    printf("\33[1;32mchar\33[1;0m s[] = \33[1;36m\"%s\"\33[1;0m\n",t5_s);
    printf("\33[1;32mchar\33[1;0m c = \33[1;36m\"%c\"\33[1;0m\n\n",t5_c);
    printf("Result:\n");
    char **t5_result = ft_split(t5_s,t5_c);
	ft_print2dchar(t5_result);

	//Test 6
    printf("\n\33[1;34mTest 6: s=\\0aa\\0bbb\n");
    char t6_s[100] = "\0aa\0bbb";
    char t6_c     = '\0';

    printf("\33[1;37mInputs:\33[1;0m\n");
    printf("\33[1;32mchar\33[1;0m s[] = \33[1;36m\"%s\"\33[1;0m\n",t6_s);
    printf("\33[1;32mchar\33[1;0m c = \33[1;36m\"%c\"\33[1;0m\n\n",t6_c);
    printf("Result:\n");
    char **t6_result = ft_split(t6_s,t6_c);
    ft_print2dchar(t6_result);

	//Test 7
    printf("\n\33[1;34mTest 7: c is in the beginning and the end\n");
    char t7_s[100] = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse ";
    char t7_c     = ' ';

    printf("\33[1;37mInputs:\33[1;0m\n");
    printf("\33[1;32mchar\33[1;0m s[] = \33[1;36m\"%s\"\33[1;0m\n",t7_s);
    printf("\33[1;32mchar\33[1;0m c = \33[1;36m\"%c\"\33[1;0m\n\n",t7_c);
    printf("Result:\n");
    char **t7_result = ft_split(t7_s,t7_c);
    ft_print2dchar(t7_result);

   // "  tripouille  42  ", ' '
	// Test 8
    printf("\n\33[1;34mTest 8: \"  tripouille  42  \", \' \' \n");
    char t8_s[100] = "  tripouille  42  ";
    char t8_c     = ' ';

     printf("\33[1;37mInputs:\33[1;0m\n");
     printf("\33[1;32mchar\33[1;0m s[] = \33[1;36m\"%s\"\33[1;0m\n",t8_s);
     printf("\33[1;32mchar\33[1;0m c = \33[1;36m\"%c\"\33[1;0m\n\n",t8_c);
     printf("Result:\n");
     char **t8_result = ft_split(t8_s,t8_c);
     ft_print2dchar(t8_result);
	
     return (0);
}
