/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:15:35 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/13 18:23:36 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
    //Test 1: c en s
    //c se encuentra en s y devuelve puntero
    printf("\33[1;35m---------------------------------\33[1;0m\n");
    printf("\33[1;35mTest 1 : c en s\33[1;0m\n");
    //Test 1 Variables
    char t1_str[50] = "abdciasdf;acsdfpcoasdfjkasdfk";
    char t1_c       = 'c';
    int t1_len      = 4;
    //Test 1 init
    void *test1_ft  = ft_memchr(t1_str, t1_c, t1_len);
    void *test1_o   = memchr(t1_str, t1_c, t1_len);
    if(test1_ft == test1_o)
    {
        printf("\33[1;32m[SUCCESS]\33[1;0m\n");
        printf("ft_memchr = \33[1;36m%p\33[1;0m\nmemchr = \33[1;36m%p\33[1;0m\n", test1_ft, test1_o);
    }
    else
    {
        printf("\33[1;31m[FAIL]\33[1;0m\n");
        printf("ft_memchr = \33[1;36m%p\33[1;0m\nmemchr =\33[1;36m%p\33[1;0m\n",test1_ft, test1_o);
    }
    //Test 2: c es '\0' y no hay NULLs en s
    //c se encuentra en s y devuelve puntero
	printf("\n");
    printf("\33[1;35m---------------------------------\33[1;0m\n");
    printf("\33[1;35mTest 2 : c es \\0 y no hay NULLs en s\33[1;0m\n");
    //Test 2 Variables
    char t2_str[50] = "abdciasdf;acsdfpcoasdfjkasdfk";
    char t2_c       = '\0';
    int t2_len      = 4;
    //Test 2 init
    void *test2_ft  = ft_memchr(t2_str, t2_c, t2_len);
    void *test2_o   = memchr(t2_str, t2_c, t2_len);
    if(test2_ft == test2_o)
    {
        printf("\33[1;32m[SUCCESS]\33[1;0m\n");
        printf("ft_memchr = \33[1;36m%p\33[1;0m\nmemchr = \33[1;36m%p\33[1;0m\n", test2_ft, test2_o);
    }
    else
    {
        printf("\33[1;31m[FAIL]\33[1;0m\n");
        printf("ft_memchr = \33[1;36m%s\33[1;0m\nmemchr = \33[1;36m%s\33[1;0m\n",test2_ft, test2_o);
    }
    //Test 3: c es '\0' y no hay NULLs en s y llegamos al final
    //c se encuentra en s y devuelve puntero
	printf("\n");
    printf("\33[1;35m---------------------------------\33[1;0m\n");
    printf("\33[1;35mTest 3 : c es \\0 y no hay NULLs en s y llegamos al final\33[1;0m\n");
    //Test 3 Variables
    char t3_str[50] = "abdciasdf;acsdfpcoasdfjkasdfk";
    char t3_c       = '\0';
    int t3_len      = 50;
    //Test 1 init
    void *test3_ft  = ft_memchr(t3_str, t3_c, t3_len);
    void *test3_o   = memchr(t3_str, t3_c, t3_len);
    if(test3_ft == test3_o)
    {
        printf("\33[1;32m[SUCCESS]\33[1;0m\n");
        printf("ft_memchr = \33[1;36m%p\33[1;0m\nmemchr = \33[1;36m%p\33[1;0m\n", test3_ft, test3_o);
    }
    else
    {
        printf("\33[1;31m[FAIL]\33[1;0m\n");
        printf("ft_memchr = \33[1;36m%p\33[1;0m\nmemchr = \33[1;36m%p\33[1;0m\n",test3_ft, test3_o);
    }
    //Test 4: c es \\0 y s es \"\" 
    //c se encuentra en s y devuelve puntero
	printf("\n");
    printf("\33[1;35m---------------------------------\33[1;0m\n");
    printf("\33[1;35mTest 4 : c es \\0 y s es \"\"\33[1;0m\n");
    //Test 4 Variables
    char t4_str[50] = "";
    char t4_c       = '\0';
    int t4_len      = 50;
    //Test 4 init
    void *test4_ft  = ft_memchr(t4_str, t4_c, t4_len);
    void *test4_o   = memchr(t4_str, t4_c, t4_len);
    if(test4_ft == test4_o)
    {
        printf("\33[1;32m[SUCCESS]\33[1;0m\n");
        printf("ft_memchr = \33[1;36m%p\33[1;0m\nmemchr = \33[1;36m%p\33[1;0m\n", test4_ft, test4_o);
    }
    else
    {
        printf("\33[1;31m[FAIL]\33[1;0m\n");
        printf("ft_memchr = \33[1;36m%p\33[1;0m\nmemchr = \33[1;36m%p\33[1;0m\n",test4_ft, test4_o);
	}
	//Test 5: c es d, s es "abcd" y n es 3
	//c no se encuentra en s y se devuelve NULL
	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 5 :c es d, s es \"abcd\" y n es 3 \33[1;0m\n");
	//Test 5 Variables
	char t5_str[50] = "abcd";
	char t5_c       = 'd';
	int t5_len      = 3;
	//Test 5 init
	void *test5_ft  = ft_memchr(t5_str, t5_c, t5_len);
	void *test5_o   = memchr(t5_str, t5_c, t5_len);
	if(test5_ft == test5_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_memchr = \33[1;36m%p\33[1;0m\nmemchr = \33[1;36m%p\33[1;0m\n", test5_ft, test5_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
    	printf("ft_memchr = \33[1;36m%p\33[1;0m\nmemchr = \33[1;36m%p\33[1;0m\n",test5_ft, test5_o);
	}
    //Test 6: c es 2
    //c se encuentra en s y devuelve puntero
	printf("\n");
    printf("\33[1;35m---------------------------------\33[1;0m\n");
    printf("\33[1;35mTest 6 :c es 2 \33[1;0m\n");
    //Test 6 Variables
    char t6_str[] = {0, 1, 2 ,3 ,4 ,5};
    char t6_c       = 2;
    int t6_len      = 3;
    //Test 6 init
    void *test6_ft  = ft_memchr(t6_str, t6_c, t6_len);
    void *test6_o   = memchr(t6_str, t6_c, t6_len);
    if(test6_ft == test6_o)
    {
        printf("\33[1;32m[SUCCESS]\33[1;0m\n");
        printf("ft_memchr = \33[1;36m%p\33[1;0m\nmemchr = \33[1;36m%p\33[1;0m\n", test6_ft, test6_o);
    }
    else
    {
        printf("\33[1;31m[FAIL]\33[1;0m\n");
        printf("ft_memchr = \33[1;36m%p\33[1;0m\nmemchr = \33[1;36m%p\33[1;0m\n", test6_ft, test6_o);
    }
}
