/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:51:30 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/18 20:57:14 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;
	char *begining;
	_Bool is_in;
	size_t nlen;
	i = 0;
	j = 0;
	begining = (char *)&haystack[0];
	nlen = strlen(needle);
	if(needle[0] == '\0')
		return ((char *)haystack);
	while(haystack[i] && i <= n)
	{
		if(is_in && j >= nlen - 1)
		{
			return (begining);
		}
		if(haystack[i] == needle[j])
		{
			if(!is_in)
			{
				begining = (char *)&haystack[i];
				is_in = 1;
			}
			j++;
		}
		else
		{
			is_in = 0;
			j = 0;
		}
		i++;
	}
	return (NULL);	
}
