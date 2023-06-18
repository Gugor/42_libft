/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:51:30 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/18 17:14:35 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_get_begining(char *haystack, char *needle, size_t n, int i, int j)
{
		nlen = ft_strlen(needle);
		if (haystack[i + j] == needle[j] && (i + j) < n && j < nlen)
		{
			j++;
			if(j >= nlen)
				return (begining);
		}
		else
		{
			j = 0;
			i++;
		}
}

static char *ft_findneedle(char *haystack, char *needle, size_t n)
{
	char *begining;
	size_t	i;
	size_t	j;
	size_t nlen;

	begining = (char *)&haystack[0];
	i = 0;
	j = 0;
	begining = &haystack[i];
	while (haystack[i] && i < n)
	{
	}
	return (begining);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	if (needle[0] == '\0')
		return ((char *)haystack);
	return (ft_findneedle((char *)haystack, (char *)needle, n));
}
/*
int main(void)
{
	int n = 15;
	char str[30] = "lorem ipsum dolor sit amet";
	char needle[6] = "lorem";
	ft_strnstr(str,needle, n);
}*/
