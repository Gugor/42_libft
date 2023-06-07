/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:39:35 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/07 19:19:59 by hmontoya         ###   ########.fr       */
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
}

int main (void)
{
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
    ft_print2dchar(ft_split(t4_s,t4_c));

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
	
	return (0);
}
