/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:49:28 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/16 20:22:41 by hmontoya         ###   ########.fr       */
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
	char *t1_dst = t1_src + 3;
	int t1_len      = 4;
	//Init
	void *test1_ft  = ft_memmove(t1_dst, t1_src, t1_len);
	void *test1_o   = memmove(t1_dst, t1_src, t1_len);
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

}
