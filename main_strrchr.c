/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:21:28 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/11 19:34:01 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	//Test 1: normal params.
	char test1[50] = "Normal test";
	printf("-----------------------\n");
	printf("\33[1;33mTest 1: Normal params:\33[1;0m\n");
	char *ft_tst1 = ft_strrchr(test1,'l');
	char *tst1    = strrchr(test1,'l');
	if(ft_tst1 == tst1)
	{
		printf("Diff: \33[1;32m[OK]\33[1;0m\n>>ft_ : %s\n>>std : %s\n",ft_tst1,tst1);

	}
	else 
	{
		printf("Diff:\n>>ft_ : %s\n>>std : %s \33[1;31m[OK]\33[1;0m \n",ft_tst1,tst1);	
	}
	//Test 2: empty string "".
	char test2[50] = "";
	printf("-----------------------\n");
	printf("\33[1;33mTest 2: empty string "":\33[1;0m\n");
	char *ft_tst2 = ft_strrchr(test2,'l');
	char *tst2    = strrchr(test2,'l');
	if(ft_tst2 == tst2)
	{
		printf("Diff: \33[1;32m[OK]\33[1;0m\n>>ft_ : %s\n>>std : %s\n",ft_tst2,tst2);

	}
	else 
	{
		printf("Diff: \33[1;31m[OK]\33[1;0m\n>>ft_ : %s\n>>std : %s\n",ft_tst2,tst2);	
	}
}
