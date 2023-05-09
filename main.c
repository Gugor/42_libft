/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:56:22 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/02 17:17:55 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	char test1Alph = 'a';
	
	// ==========================
	// TEST 1: is_alpha(char c); 
	//	return: 0 is alpha char value non-zero otherwise
	if (ft_isalpha(test1Alph) == isalpha(test1Alph))
		printf("TEST 1: isalpha [SUCCESS]");
	else
	{
		printf("TEST 1: isalpha [FAIL]\n");
		printf(">>ft_ %i\n>>is_ %i \n",ft_isalpha(test1Alph), isalpha(test1Alph));
	}

}
