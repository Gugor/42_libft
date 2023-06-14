/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:43:53 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/14 17:55:06 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *tmpdst;
	unsigned char *tmpsrc;

	i = 0;
	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	if(!dst && !src)
		return (NULL);		
	while (i < n)
	{
		tmpdst[i] = tmpsrc[i];
		i++;
	}
	return ((void *)tmpdst);
}
