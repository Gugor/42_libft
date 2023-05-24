/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:41:04 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/24 18:59:32 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	// STRLCAT reasearch test 
	printf("\33[1;36mSTRLCAT test SO function [strlcat]\33[1;0m\n\n");
	printf("[strlcat]\n Test 1: dstsize == dst + src\n");
	char st1_dst[50]     = "Silence is ";
	char st1_src[50]     = "gold";
	size_t st1_dstsize   = 15;
	printf("char dst       = \"%s\" (%zu)\n",st1_dst, ft_strlen(st1_dst));
	printf("char src       = \"%s\" (%zu)\n",st1_src, ft_strlen(st1_src));
	printf("size_t dstsize = %zu\n", st1_dstsize);
	size_t st1_test = strlcat(st1_dst, st1_src, st1_dstsize);
	printf("Result: \"%s\" (%zu)\n",st1_dst, st1_test);
	
	printf("\n.............................\n");
	printf("[strlcat]\n Test 2: dstsize > dst + src\n");
	char st2_dst[50]     = "Silence is ";
	char st2_src[50]     = "gold";
	size_t st2_dstsize   = 16;
	printf("char dst       = \"%s\" (%zu)\n",st2_dst, ft_strlen(st2_dst));
	printf("char src       = \"%s\" (%zu)\n",st2_src, ft_strlen(st2_src));
	printf("size_t dstsize = %zu\n", st2_dstsize);
	size_t st2_test = strlcat(st2_dst, st2_src, st2_dstsize);
	printf("Result: \"%s\" (%zu)\n",st2_dst, st2_test);

	printf("\n.............................\n");
	printf("[strlcat]\n Test 3: dstsize == 0\n");
	char st3_dst[50]     = "Silence is ";
	char st3_src[50]     = "gold";
	size_t st3_dstsize   = 0;
	printf("char dst       = \"%s\" (%zu)\n",st3_dst, ft_strlen(st3_dst));
	printf("char src       = \"%s\" (%zu)\n",st3_src, ft_strlen(st3_src));
	printf("size_t dstsize = %zu\n", st3_dstsize);
	size_t st3_test = strlcat(st3_dst, st3_src, st3_dstsize);
	printf("Result: \"%s\" (%zu)\n",st3_dst, st3_test);

	printf("\n.............................\n");
	printf("[strlcat]\n Test 4: dstsize > dst + src && dst == 0\n");
	char st4_dst[50]     = "";
	char st4_src[50]     = "gold";
	size_t st4_dstsize   = 16;
	printf("char dst       = \"%s\" (%zu)\n",st4_dst, ft_strlen(st4_dst));
	printf("char src       = \"%s\" (%zu)\n",st4_src, ft_strlen(st4_src));
	printf("size_t dstsize = %zu\n", st4_dstsize);
	size_t st4_test = strlcat(st4_dst, st4_src, st4_dstsize);
	printf("Result: \"%s\" (%zu)\n",st4_dst, st4_test);
	
	printf("\n.............................\n");
	printf("[strlcat]\n Test 5: dstsize < dst\n");
	char st5_dst[50]     = "Silence is ";
	char st5_src[50]     = "gold";
	size_t st5_dstsize   = 5;
	printf("char dst       = \"%s\" (%zu)\n",st5_dst, ft_strlen(st5_dst));
	printf("char src       = \"%s\" (%zu)\n",st5_src, ft_strlen(st5_src));
	printf("size_t dstsize = %zu\n", st5_dstsize);
	size_t st5_test = strlcat(st5_dst, st5_src, st5_dstsize);
	printf("Result: \"%s\" (%zu)\n",st5_dst, st5_test);

	printf("\n.............................\n");
	printf("[strlcat] Test 6: dstsize < src && dst == ""\n");
	char st6_dst[50]     = "";
	char st6_src[50]     = "gold";
	size_t st6_dstsize   = 3;
	printf("char dst       = \"%s\" (%zu)\n",st6_dst, ft_strlen(st6_dst));
	printf("char src       = \"%s\" (%zu)\n",st6_src, ft_strlen(st6_src));
	printf("size_t dstsize = %zu\n", st6_dstsize);
	size_t st6_test = strlcat(st6_dst, st6_src, st6_dstsize);
	printf("Result: \"%s\" (%zu)\n",st6_dst, st6_test);

	printf("\n.............................\n");
	printf("[strlcat] Test 7: dstsize > dst && < src ""\n");
	char st7_dst[50]     = "iasda ";
	char st7_src[50]     = "goldasdasd";
	size_t st7_dstsize   = 7;
	printf("char dst       = \"%s\" (%zu)\n",st7_dst, ft_strlen(st7_dst));
	printf("char src       = \"%s\" (%zu)\n",st7_src, ft_strlen(st7_src));
	printf("size_t dstsize = %zu\n", st7_dstsize);
	size_t st7_test = strlcat(st7_dst, st7_src, st7_dstsize);
	printf("Result: \"%s\" (%zu)\n",st7_dst, st7_test);

	printf("\33[1;36mSTRLCAT own function test SO [ft_strlcat]\33[1;0m\n\n");
	//Test 1: "
	//
	/*printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 1 : dstsize == src + dst\33[1;0m\n");
	//Variables
	char t1_dst1[50] = "Silence is ";
	char t1_src1[50] = "gold";
	char t1_dst2[50] = "Silence is";
	char t1_src2[50] = "gold";
	size_t t1_dstsize   = 15;
	//Init
	printf("Preparinf ft_...");
	void *test1_ft  = ft_strlcat(t1_dst1, t1_src1, t1_dstsize);
	printf("Preparing so_...");
	void *test1_o   = strlcat(t4_dst2, t1_src2, t1_dstsize);
	printf("char dst       = \"%s\" (%zu)\n",t1_dst1, ft_strlen(t1_dst1));
	printf("char src       = \"%s\" (%zu)\n",t1_src1, ft_strlen(t1_src1));
	printf("size_t dstsize = %zu\n", t1_dstsize);
	if(test1_ft == test1_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n", test1_ft, test1_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n",test1_ft, test1_o);
	}*/
	//Test 2: "
	//
/*	printf("\n");
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 1 : dstsize == src + dst\33[1;0m\n");
	//Variables
	char t1_dst1[50] = "Silence is ";
	char t1_src1[50] = "gold";
	char t1_dst2[50] = "Silence is";
	char t1_src2[50] = "gold";
	size_t t1_dstsize   = 15;
	//Init
	printf("Preparinf ft_...");
	void *test1_ft  = ft_strlcat(t1_dst1, t1_src1, t1_dstsize);
	printf("Preparing so_...");
	void *test1_o   = strlcat(t4_dst2, t1_src2, t1_dstsize);
	printf("char dst       = \"%s\" (%zu)\n",t1_dst1, ft_strlen(t1_dst1));
	printf("char src       = \"%s\" (%zu)\n",t1_src1, ft_strlen(t1_src1));
	printf("size_t dstsize = %zu\n", t1_dstsize);
	if(test1_ft == test1_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n", test1_ft, test1_o);
	}
	else
	{
    	printf("\33[1;31m[FAIL]\33[1;0m\n");
    	printf("ft_ = \33[1;36m%s\33[1;0m\nso = \33[1;36m%s\33[1;0m\n",test1_ft, test1_o);
	}*/
}
