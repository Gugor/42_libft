/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:49:28 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/17 18:30:16 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main (void)
{
	//Test 1:src > dst y no estan vacias
    //
    printf("\n");
    printf("\33[1;35m---------------------------------\33[1;0m\n");
    printf("\33[1;35mTest 1 : src > dst y no estan vacias\33[1;0m\n");
    //Variables
    char t1_src[50] = "Hola Mundo";
    char *t1_dst = t1_src ;
    int t1_len      = 5;
    //Init
    void *test1_ft  = ft_memmove(t1_dst, t1_src + 5, t1_len);
    void *test1_o   = memmove(t1_dst, t1_src + 5 , t1_len);
    if(test1_ft == test1_o)
    {
        printf("\33[1;32m[SUCCESS]\33[1;0m\n");
            printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n", test1_ft, test1_o);
    }
    else
    {
            printf("\33[1;31m[FAIL]\33[1;0m\n");
            printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n",test1_ft, test1_o);
    }
    //Test 2:src < dst y no estan vacias
    //
    printf("\n");
    printf("\33[1;35m---------------------------------\33[1;0m\n");
    printf("\33[1;35mTest 2 : src < dst y no estan vacias\33[1;0m\n");
    //Variables
    char t2_src[50] = "Hola Mundo";
    char *t2_dst = t2_src + 3;
    printf(">>Dest dir: %p\n>>Src + 3 dir:%p\n>>Src:%p\n", t2_dst, t2_src + 3, t2_src);
    int t2_len      = 4;
    //Init
    void *test2_ft  = ft_memmove(t2_dst, t2_src, t2_len);
    void *test2_o   = memmove(t2_dst, t2_src, t2_len);
    if(test2_ft == test2_o)
    {
        printf("\33[1;32m[SUCCESS]\33[1;0m\n");
            printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n", test2_ft, test2_o);
    }
    else
    {
            printf("\33[1;31m[FAIL]\33[1;0m\n");
            printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n",test2_ft, test2_o);
    }
    //Test 3:src == dst y no estan vacias
    //
    printf("\n");
    printf("\33[1;35m---------------------------------\33[1;0m\n");
    printf("\33[1;35mTest 3 : src == dst y no estan vacias\33[1;0m\n");
    //Variables
    char t3_src[50] = "Hola Mundo";
    char *t3_dst = t3_src;
    int t3_len      = 4;
    //Init
    void *test3_ft  = ft_memmove(t3_dst, t3_src, t3_len);
    void *test3_o   = memmove(t3_dst, t3_src, t3_len);
    if(test3_ft == test3_o)
    {
        printf("\33[1;32m[SUCCESS]\33[1;0m\n");
            printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n", test3_ft, test3_o);
    }
    else
    {
            printf("\33[1;31m[FAIL]\33[1;0m\n");
            printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n",test3_ft, test3_o);
    }
	//Test 4:src == dst y dst es ""
    //
    printf("\n");
    printf("\33[1;35m---------------------------------\33[1;0m\n");
    printf("\33[1;35mTest 4 : src == dst y dst es \"\"\33[1;0m\n");
    //Variables
    char t4_src[50] = "Hola Mundo";
    char t4_dst[50] = "";
    int t4_len      = 4;
    //Init
    void *test4_ft  = ft_memmove(t4_dst, t4_src, t4_len);
    void *test4_o   = memmove(t4_dst, t4_src, t4_len);
    if(test4_ft == test4_o)
    {
        printf("\33[1;32m[SUCCESS]\33[1;0m\n");
            printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n", test4_ft, test4_o);
    }
    else
    {
            printf("\33[1;31m[FAIL]\33[1;0m\n");
            printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n",test4_ft, test4_o);
    }
	//Test 5:src != dst y dst es nueva cadena
    //
    printf("\n");
    printf("\33[1;35m---------------------------------\33[1;0m\n");
    printf("\33[1;35mTest 5 : src != dst y dst es nueva cadena\33[1;0m\n");
    //Variables
    char t5_src[50] = "Hola Mundo";
    char t5_dst[50] = "Lorem ipsum is my new friend";
    int t5_len      = 10;
    //Init
    void *test5_ft  = ft_memmove(t5_dst, t5_src, t5_len);
    void *test5_o   = memmove(t5_dst, t5_src, t5_len);
    if(test5_ft == test5_o)
    {
        printf("\33[1;32m[SUCCESS]\33[1;0m\n");
            printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n", test5_ft, test5_o);
    }
    else
    {
            printf("\33[1;31m[FAIL]\33[1;0m\n");
            printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n",test5_ft, test5_o);
    }
}
