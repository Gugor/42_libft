/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:45:18 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/25 17:14:45 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	printf("//main_strdup.c\n");
	//Test 1: 
	//
	
	char str[16] = "Silence is gold.";
	char *dup = strdup(str);
	printf("Test 1: str != \'\\0\'\n");
	printf("char *str =\33[1;36m\"%s\"\33[1;0m\n",str);
	while (*dup != 0 )
	{
		printf("strup result = \33[1;36m\"%c\"\33[1;0m\n",*dup);
		dup++;
	}
	return (0);
}
