/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:07:56 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/16 20:25:39 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *dest;

	dest = (unsigned char *)dst;
	if (src == dst)
		return ((void *)dest);
	if (src > dst)
	{
		i = 0;
		printf("Dest: %p, src: %p",dest,src);
		while(i < len)
		{
			dest[i] = (unsigned char)src + i;
			i++;
		}
	}
	else
	{
		while (len-- >= 0)
		{
			dest[len] = (unsigned char)src + len;
		}
	}
	return ((void *)dest);
}
