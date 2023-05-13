/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:56:22 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/10 19:29:31 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	/*char test1Alph = 'a';
	char test2digit = '0';
	char test3alnum = '0';
	char test3alnum2 = 'i';
	char test4ascii = ' ';
	char test4ascii2 = 0;
	int test4ascii3 = 177;
	char test5print = '2';
	int test5print2 = 127;
	char test5print3 = ' ';*/
	char test6strlen[50] = "Silence is golden";
	char testdst[50];
	//char test6strlen2[50] = "This is more than 5i\200";
/*		
	// ==========================
	// TEST 1: is_alpha(char c); 
	//	return: 0 is alpha char value non-zero otherwise
	printf("=========TEST 1: isalpha ==========\n");
	if (ft_isalpha(test1Alph) == isalpha(test1Alph))
		printf("isalpha %c [SUCCESS]\n", test1Alph);
	else
	{
		printf("isalpha %c [FAIL]\n", test1Alph);
		printf(">>ft_ %i\n>>is_ %i \n",ft_isalpha(test1Alph), isalpha(test1Alph));
	}
	printf(".\n");

	// ==========================
	// TEST 2: is_digit(char c); 
	//	return: 0 is digit int value non-zero otherwise
	printf("-----------------------------------\n");
	printf("=========TEST 2: isdigit ==========\n");
	if (ft_isdigit(test2digit) == isdigit(test2digit))
		printf("isdigit %c [SUCCESS]\n", test2digit);
	else
	{
		printf("TEST 2: isdigit [FAIL]\n");
		printf(">>ft_ %i\n>>is_ %i \n",ft_isdigit(test2digit), isdigit(test2digit));
	}
	printf(".\n");
	
	// ==========================
	// TEST 3: is_alnum(char c); 
	//	return: 0 is alpganumeric int value non-zero otherwise
	printf("-----------------------------------\n");
	printf("=========TEST 3: isalnum ==========\n");
	if (ft_isalnum(test3alnum) == isalnum(test3alnum))
		printf("isalnum digit %c [SUCCESS]\n", test3alnum);
	else
	{
		printf("isalnum alpha [FAIL]\n");
		printf(">>ft_ %i\n>>is_ %i \n",ft_isalnum(test3alnum), isalnum(test3alnum));
	}
	if (ft_isalnum(test3alnum2) == isalnum(test3alnum2))
		printf("isalnum alpha %c [SUCCESS]\n", test3alnum2);
	else
	{
		printf("isalnum %c [FAIL]\n", test3alnum2);
		printf(">>ft_ %i\n>>is_ %i \n",ft_isalnum(test3alnum2), isalnum(test3alnum2));
	}
	printf(".\n");

	// ==========================
	// TEST 4: is_ascii(char c); 
	//	return: 0 is ascci code or a value non-zero otherwise
	printf("-----------------------------------\n");
	printf("=========TEST 4: isascii ==========\n");
	if (ft_isascii(test4ascii) == isascii(test4ascii))
		printf("isascii %c [SUCCESS]\n", test4ascii);
	else
	{
		printf("isascii %c [FAIL]\n", test4ascii);
		printf(">>ft_ %i\n>>is_ %i \n",ft_isascii(test4ascii), isascii(test4ascii));
	}
	if (ft_isascii(test4ascii2) == isascii(test4ascii2))
		printf("isascii %c [SUCCESS]\n", test4ascii2);
	else
	{
		printf("isascii %c [FAIL]\n", test4ascii2);
		printf(">>ft_ %i\n>>is_ %i \n",ft_isascii(test4ascii2), isascii(test4ascii2));
	}
	
	if (ft_isascii(test4ascii3) == isalnum(test4ascii3))
		printf("isascii %c [SUCCESS]\n", test4ascii3);
	else
	{
		printf("isascii %c [FAIL]\n", test4ascii3);
		printf(">>ft_ %i\n>>is_ %i \n",ft_isascii(test4ascii3), isascii(test4ascii3));
	}

	// ==========================
	// TEST 5: is_print(char c); 
	//	return: 0 is printablei or a value non-zero otherwise
	printf("-----------------------------------\n");
	printf("=========TEST5: isprint ==========\n");
	if (ft_isprint(test5print) == isprint(test5print))
		printf("isprint %c [SUCCESS]\n", test5print);
	else
	{
		printf("isprint %c [FAIL]\n", test5print);
		printf(">>ft_ %i\n>>is_ %i \n",ft_isprint(test5print), isprint(test5print));
	}
	if (ft_isprint(test5print2) == isprint(test5print2))
		printf("isprint %c [SUCCESS]\n", test5print2);
	else
	{
		printf("isprint %c [FAIL]\n", test5print2);
		printf(">>ft_ %i\n>>is_ %i \n",ft_isprint(test5print2), isprint(test5print2));
	}
	
	if (ft_isprint(test5print3) == isprint(test5print3))
		printf("isprint %c [SUCCESS]\n", test5print3);
	else
	{
		printf("isprint %c [FAIL]\n", test5print3);
		printf(">>ft_ %i\n>>is_ %i \n",ft_isprint(test5print3), isprint(test5print3));
	}

	// ==========================
	// TEST 6: strlen(cont char *s); 
	//	return: int of length of string 
	printf("-----------------------------------\n");
	printf("=========TEST 6: strlen ==========\n");
	if (ft_strlen(test6strlen) == strlen(test6strlen))
		printf("strlen %zu %lu [SUCCESS]\n", ft_strlen(test6strlen), strlen(test6strlen));
	else
	{
		printf("strlen %zu %lu [FAIL]\n",ft_strlen(test6strlen), strlen(test6strlen));
		printf(">>ft_ %zu\n>>native_ %lu \n",ft_strlen(test6strlen), strlen(test6strlen));
	}
	if (ft_strlen(test6strlen2) == strlen(test6strlen2))
		printf("strlen %zu %lu [SUCCESS]\n", ft_strlen(test6strlen), strlen(test6strlen));
	else
	{
		printf("strlen %zu %lu [FAIL]\n",ft_strlen(test6strlen), strlen(test6strlen));
		printf(">>ft_ %zu \n>>is_ %lu \n",ft_strlen(test6strlen2), strlen(test6strlen2));
	}
	// ==========================
	// TEST 7: toupper(int char c); 
	//	return: get alpha lower char and transform it to upper 
	printf("-----------------------------------\n");
	printf("=========TEST 7: toupper ==========\n");
	if (ft_toupper(test6strlen[2]) == toupper(test6strlen[2]))
		printf("toupper:\n%d %d [SUCCESS]\n", ft_toupper(test6strlen[2]), toupper(test6strlen[2]));
	else
	{
		printf("toupper:\n%d %d [FAIL]\n", ft_toupper(test6strlen[2]), toupper(test6strlen[2]));
		printf(">>ft_ %d\n>>native_ %d \n",ft_toupper(test6strlen[2]), toupper(test6strlen[2]));
	}*/	
	// ==========================
	// TEST 8: memcpy(void *restric dist, const void *restrict src, size_t n); 
	//	return copy mmory area from src to dst 
	printf("-----------------------------------\n");
	printf("=========TEST 8: memcpy ==========\n");
	unsigned char *resft = (unsigned char *)ft_memcpy(testdst,test6strlen,5);
	unsigned char *res   = (unsigned char *)memcpy(testdst, test6strlen,5);

	if (resft == res)
		printf("memcpy\n%s %s [SUCCESS]\n", resft, res);
	else
	{
		printf("memcpy:\n%s %s [FAIL]\n", resft, res);
		printf(">>ft_ %s\n>>native_ %s \n",ft_memcpy(testdst, test6strlen,5), memcpy(testdst,test6strlen, 5));
	}	
	// Test NULL params on dst
	unsigned char *resft2 = (unsigned char *)ft_memcpy((void *)0,test6strlen,5);
	unsigned char *res2   = (unsigned char *)memcpy((void *)0, test6strlen,5);
	if (resft == res)
		printf("memcpy\n%s %s [SUCCESS]\n", resft2, res2);
	else
	{
		printf("memcpy:\n%s %s [FAIL]\n", resft2, res2);
		printf(">>ft_ %s\n>>native_ %s \n",resft2,res2);
	}	
	// Test NULL param on src
	unsigned char *resft3 = (unsigned char *)ft_memcpy(test6strlen,(void *)0,5);
	unsigned char *res3   = (unsigned char *)memcpy(test6strlen,(void *)0,5);
	if (resft == res)
		printf("memcpy\n%s %s [SUCCESS]\n", resft3, res3);
	else
	{
		printf("memcpy:\n%s %s [FAIL]\n", resft3, res3);
		printf(">>ft_ %s\n>>native_ %s \n",resft3,res3);
	}	
}
