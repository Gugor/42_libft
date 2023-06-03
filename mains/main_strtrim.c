/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:13:55 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/03 17:46:32 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main (void)
{
	//Test 1
	char t1_s1[22] = "super cali super";
	char t1_set[6] = "super";
	char *t1_result;

	printf("\33[1;34mTest 1: same word begining and end\33[1;0m\n");
	printf("\33[1;37mInputs:\33[1;0m\n");
	t1_result = ft_strtrim(t1_s1,t1_set);
	printf("Result:\n>>\33[1;36m%s\33[1;0m\n", t1_result);
	if (t1_result)
		free(t1_result);
	//Test 2
	char t2_s1[24] = "\t\t \t \nsuper \ncali \tsuper";
	char t2_set[9] = "\t\n super";
	char *t2_result;

	printf("\33[1;34mTest 2: space caracters\33[1;0m\n");
	t2_result = ft_strtrim(t2_s1,t2_set);
	printf("Result:\n>>\33[1;36m%s\33[1;0m\n", t2_result);
	if (t2_result)
		free(t2_result);
	//Test 3
	char t3_s1[2] = "";
	char t3_set[9] = "\t\n super";
	char *t3_result;

	printf("\33[1;34mTest 3: s1 empty string\33[1;0m\n");
	t3_result = ft_strtrim(t3_s1,t3_set);
	printf("Result:\n>>\33[1;36m%s\33[1;0m\n", t3_result);
	if (t3_result)
		free(t3_result);
	//Test 4
	char t4_s1[10] = "       ";
	char t4_set[2] = " ";
	char *t4_result;

	printf("\33[1;34mTest 4: s1 has spaces and set is space\33[1;0m\n");
	t4_result = ft_strtrim(t4_s1,t4_set);
	printf("Result:\n>>\33[1;36m%s\33[1;0m\n >>%p (%lu)\n", t4_result, t4_result, ft_strlen(t4_result));
	if (t4_result)
		free(t4_result);
	return (0);
}
