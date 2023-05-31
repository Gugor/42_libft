/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:59:18 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/31 18:38:56 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char ft_toupper2(unsigned int cp,char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return ((char)c);
}

int main(void)
{
	char str[26] = "I want to be free and up!!";
	printf("Original str: %s\n",str);
	printf("\nModified str: %s\n",ft_strmapi(str,ft_toupper2));
}
