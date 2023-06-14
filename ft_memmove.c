/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:07:56 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/14 19:00:52 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sorc;

	dest = (unsigned char *) dst;
	sorc = (unsigned char *) src;
	if (src == dst)
		return ((void *) dst);
	else if (sorc > dest)
	{
		i = 0;
		while (i < len)
		{
			dest[i] = *(sorc + i);
			i++;
		}
	}
	else
	{
		while (len--)
			dest[len] = *(sorc + len);
	}
	return ((void *) dst);
}
