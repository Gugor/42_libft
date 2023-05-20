/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:07:11 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/20 17:26:11 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int args_check_num(char **args)
{
	size_t len;

	len = ft_strlen(args);
	if(len < 4 || len > 4)
	{
		printf("Necesitas pasar 3 argumentos a este programa.\n\33[1;36m[haystack], [needle],[n]\33[1;0m\n");	
		return (0);
	}
	else
	{
		return (1);
	}
}

void test_case(char *haystack, char *needle, size_t n)
{
		printf("\33[1;32mchar\33[1;0m *haystak =\33[1;36m %s\33[1;0m\n", haystack);	
		printf("\33[1;32mchar\33[1;0m *needle  =\33[1;36m %s\33[1;0m\n", needle);	
		printf("\33[1;32mchar\33[1;0m n        =\33[1;36m %zu\33[1;0m\n", n);	
		
		void *test1_ft  = ft_strnstr(haystack, needle, n);
    	void *test1_o   = strnstr(haystack, needle, n);		
		
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
}

int main(int argc, char **argv)
{
	if(args_check_num(argv) && argc > 1)
	{
		test_case(argv[1],argv[2],argv[3][0]);
	}
}

