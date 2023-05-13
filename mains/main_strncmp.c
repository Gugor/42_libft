/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:52:11 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/13 13:20:56 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	//Test 1: s1 == s2 ( return 0 )
	//ambas cadenas son iguales 
	printf("\33[1;35m---------------------------------\33[1;0m\n");
	printf("\33[1;35mTest 1: s1 == s2 ( return 0 )\33[1;0m\n");
	char t1_str[50] = "abdc";
	int t1_len		= 4;
	int test1_ft = ft_strncmp(t1_str,t1_str, t1_len);
	int test1_o = strncmp(t1_str,t1_str, t1_len);
	if(test1_ft == test1_o)
	{
		printf("\33[1;32m[SUCCESS]\33[1;0m\n");
		printf("ft_strncmp = %i\n strncmp = %i\n", test1_ft, test1_o);
	}
	else
	{
		printf("\33[1;33m[FAIL]\33[1;0m\n");
		printf("ft_strncmp = %i\n strncmp = %i\n",test1_ft, test1_o);	
	}
}
