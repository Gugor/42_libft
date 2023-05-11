/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:22:01 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/11 19:37:35 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *str;
	char ch;
	char *memo;
	int i;	

	str = (char *)s;
	ch  = (char)c;
	memo = &str[0];
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == ch)
			memo = str + i ;
		i++;
	}
	if(ch == '\0')
		memo = str + i;
	if(memo && str[0])
		return ((char *)memo);
	return (NULL);
}
