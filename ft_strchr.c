/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:51:02 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/11 15:12:32 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned char *str;
	unsigned char ch;
	int i;

	str = (unsigned char *)s;
	ch = (unsigned char) c;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == ch)
			return ((char *)str + i);
		str++;	
	}
	if(ch == '\0')
		return((char *)str + i);
	return (NULL);
}
