/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:57:57 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/20 17:51:14 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	//Test 1: needle is '\0' 
	// needle esta vacia
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 1 : needle == \"\"\33[1;0m\n");
	//Variables
	char t1_haystack[50] = "Silence is gold";
	char t1_needle[50]  = "";
	int t1_n            = 4;
	//init
	void *test1_ft  = ft_strnstr(t1_haystack, t1_needle, t1_n);
	void *test1_o   = strnstr(t1_haystack, t1_needle, t1_n);
	if(test1_ft == test1_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%p\33[1;0m\nso = \33[1;36m%p\33[1;0m\n", test1_ft, test1_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
   		printf("ft_ = \33[1;36m%p\33[1;0m\nso = \33[1;36m%p\33[1;0m\n",test1_ft, test1_o);
	}	
	//Test 2: haystack is "" 
	// haystack esta vacia
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 2 : haystack == \"\"\33[1;0m\n");
	//Variables
	char t2_haystack[50] = "";
	char t2_needle[50]  = "gold";
	int t2_n            = 4;
	//init
	void *test2_ft  = ft_strnstr(t2_haystack, t2_needle, t2_n);
	void *test2_o   = strnstr(t2_haystack, t2_needle, t2_n);
	if(test1_ft == test1_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%p\33[1;0m\nso = \33[1;36m%p\33[1;0m\n", test1_ft, test1_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
   		printf("ft_ = \33[1;36m%p\33[1;0m\nso = \33[1;36m%p\33[1;0m\n",test1_ft, test1_o);
	}	
	//Test 3: needle is haystack and n < begining 
	// neelde is in hasttack and n is equals to needle length
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 3 : needle is haystack and n < begining\33[1;0m\n");
	//Variables
	char t3_haystack[50] = "Silence is gold";
	char t3_needle[50]  = "gold";
	int t3_n            = 5;
	//init
	void *test3_ft  = ft_strnstr(t3_haystack, t3_needle, t3_n);
	void *test3_o   = strnstr(t3_haystack, t3_needle, t3_n);
	if(test3_ft == test3_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%p\33[1;0m(%s)\nso = \33[1;36m%p\33[1;0m (%s)\n", test3_ft,test3_ft,test3_o, test3_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
   		printf("ft_ = \33[1;36m%p\33[1;0m(%s)\nso = \33[1;36m%p\33[1;0m (%s)\n",test3_ft,test3_ft, test3_o, test3_o);
	}	
	//Test 4: needle is haystack and n > begining and is not EOL 
	// neelde is in hasttack and n is behing end of needle
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 4 : needle is haystack and n > begining and is not EOL\33[1;0m\n");
	//Variables
	char t4_haystack[50] = "Silence is gold ";
	char t4_needle[50]  = "gold";
	int t4_n            = 15;
	//init
	char *test4_ft  = ft_strnstr(t4_haystack, t4_needle, t4_n);
	char *test4_o   = strnstr(t4_haystack, t4_needle, t4_n);
	if(test4_ft == test4_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%p\33[1;0m(%s)\nso = \33[1;36m%p\33[1;0m (%s)\n", test4_ft,test4_ft, test4_o, test4_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
   		printf("ft_ = \33[1;36m%p\33[1;0m(%s)\nso = \33[1;36m%p\33[1;0m(%s)\n",test3_ft,test3_ft, test3_o, test3_o);
	}	
	//Test 5: needle is in haystack and n > begining and is EOL 
	// neelde is in hasttack and n is equals to needle length and is at the end of haystack
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 5 : needle is haystack and n > begining and > EOL\33[1;0m\n");
	//Variables
	char t5_haystack[50] = "Silence is gold"; //(14 + '\0')
	char t5_needle[50]  = "gold"; //(4 + '\0')
	int t5_n            = 16;
	//init
	void *test5_ft  = ft_strnstr(t5_haystack, t5_needle, t5_n);
	void *test5_o   = strnstr(t5_haystack, t5_needle, t5_n);
	if(test5_ft == test5_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%p\33[1;0m (%s)\nso = \33[1;36m%p\33[1;0m (%s)\n", test5_ft,test5_ft,test5_o, test5_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
   		printf("ft_ = \33[1;36m%p\33[1;0m (%s)\nso = \33[1;36m%p\33[1;0m (%s)\n",test3_ft,test3_ft, test3_o, test3_o);
	}	
	//Test 6: needle is in haystack and the same n > begining 
	// neelde is in hasttack and n is equals to needle length and is at the end of haystack
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 6 : needle is in haystack and is haystak and n > begining\33[1;0m\n");
	//Variables
	char t6_haystack[50] = "AAAA";
	char t6_needle[50]  = "AAAA";
	size_t t6_n            = 4;
	//init
	void *test6_ft  = ft_strnstr(t6_haystack, t6_needle, t6_n);
	void *test6_o   = strnstr(t6_haystack, t6_needle, t6_n);
	if(test6_ft == test6_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%p\33[1;0m(%s)\nso = \33[1;36m%p\33[1;0m(%s)\n", test6_ft,test6_ft,test6_o, test6_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
   		printf("ft_ = \33[1;36m%p\33[1;0m(%s)\nso = \33[1;36m%p\33[1;0m(%s)\n",test6_ft,test6_ft, test6_o, test6_o);
	}	
}
