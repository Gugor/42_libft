/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:28:04 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/25 20:48:01 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	/*printf("//main_substr.c\n");
	char *s = "";
	unsigned int strt = 0;
   	size_t ln = 1;

	char *t1_ft = ft_substr(s,strt, ln); 
	printf("Test = \"%s\" [%p]", t1, t1);	
    */
	// Test 2:
	char *str = "hola";
    size_t size = 1;
    char *ret = ft_substr(str, 2, size);
    if (!strncmp(ret, "", 1))
    {
        printf("TEST_SUCCESS");
    } else
    {
        printf("TEST_FAILED");
    }
    free(ret);
	return(0);
}
