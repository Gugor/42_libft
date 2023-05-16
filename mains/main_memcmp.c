/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:22:39 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/16 18:11:35 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	//Test 1: s1 == s2 
	//las cadenas son iguales en n bytes
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 1 :s1 == s2\33[1;0m\n");
	//Variables
	char t1_s2[50] = "Hola";
	char t1_s1[50] = "Hola";
	size_t t1_n    = 4;
	//Init
	int test1_ft  = ft_memcmp(t1_s1, t1_s2, t1_n);
	int test1_o   = memcmp(t1_s1, t1_s2, t1_n);
	if(test1_ft == test1_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
	    printf("ft_so = \33[1;36m%d\33[1;0m\nso = \33[1;36m%d\33[1;0m\n", test1_ft, test1_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%d\33[1;0m\nso = \33[1;36m%d\33[1;0m\n",test1_ft, test1_o);
	}
	//Test 2: s1 > s2
	//s1 es mayor a s2
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 2 : s1 > s2 \33[1;0m\n");
	//Variable
	char t2_s1[50]  = "Hola Caracola";
	char t2_s2[50]  = "Hola";
	size_t t2_n   = 10;
	//Init
	int test2_ft  = ft_memcmp(t2_s1, t2_s2, t2_n);
	int test2_o   = memcmp(t2_s1, t2_s2, t2_n);
	if(test2_ft == test2_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%d\33[1;0m\nso = \33[1;36m%d\33[1;0m\n", test2_ft, test2_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%d\33[1;0m\nso = \33[1;36m%d\33[1;0m\n",test2_ft, test2_o);
	}
	//Test 3: s1 < s2 
	//s1 es menor a s2
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 3 : s1 < s2\33[1;0m\n");
	//Variables
	char t3_s1[50] = "Hola";
	char t3_s2[50] = "Hola Caracola";
	size_t t3_n  = 10;
	//Init
	int test3_ft  = ft_memcmp(t3_s1, t3_s2, t3_n);
	int test3_o   = memcmp(t3_s1, t3_s2, t3_n);
	if(test3_ft == test3_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    		printf("ft_ = \33[1;36m%d\33[1;0m\nso = \33[1;36m%d\33[1;0m\n", test3_ft, test3_o);
	}
	else
	{
    		printf("\33[1;31m[FAIL]\33[1;0m\n");
    		printf("ft_ = \33[1;36m%d\33[1;0m\nso = \33[1;36m%d\33[1;0m\n",test3_ft, test3_o);
	}
	//Test 4: s1 == "" && s2 == "" y n es 50
	//las cadenas estan vacias y la n es mayor al tamano maximo de ambas
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 2 : s1 == "" && s2 == "" y n es 50 \33[1;0m\n");
	//Variable
	char t4_s1[50]  = "";
	char t4_s2[50]  = "";
	size_t t4_n   = 50;
	//Init
	int test4_ft  = ft_memcmp(t4_s1, t4_s2, t4_n);
	int test4_o   = memcmp(t4_s1, t4_s2, t4_n);
	if(test4_ft == test4_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%d\33[1;0m\nso = \33[1;36m%d\33[1;0m\n", test4_ft, test4_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
    	printf("ft_memchr = \33[1;36m%d\33[1;0m\nmemchr = \33[1;36m%d\33[1;0m\n",test2_ft, test2_o);
	}
}
