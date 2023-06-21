/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:51:30 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/20 18:34:29 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *ha, const char *ne, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	nlen;

	if (ne[0] == '\0')
		return ((char *)ha);
	i = 0;
	j = 0;
	nlen = ft_strlen(ne);
	while (ha[i] && i < n)
	{
		while (ha[i] && ne[j] && (i + j) < n && j <= nlen && ha[i + j] == ne[j])
			j++;
		if (j == nlen)
			return ((char *)ha + i);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
