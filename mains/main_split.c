/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:39:35 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/03 21:57:26 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void ft_print2dchar(char **arrstr)
{
	int i;

	i = 0;
	while (arrstr[i])
	{
		while(arrstr[i])
			printf(">>%s\n",arrstr[i]);
	}
}

int main (void)
{
	//Test 1
	printf("\33[1;34mTest 1: normal input with \';\' as character separator\n");
	char t1_s[50] = "this;is;\tmy;\nfirst; string";
	char t1_c     = ';';

	printf("\33[1;37mInputs:\33[1;0m\n");
	printf("\33[1;32mchar\33[1;0m s[] = \33[1;36m\"%s\"\33[1;0m\n",t1_s);
	printf("\33[1;32mchar\33[1;0m c = \33[1;36m\"%c\"\33[1;0m\n\n",t1_c);
	printf("Result:\n");
	ft_print2dchar(ft_split(t1_s,t1_c));
	
	return (0);
}
