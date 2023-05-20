/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 21:55:56 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/20 22:48:31 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t src_len;
	size_t dst_len;
	size_t i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if(dstsize <= 0)
		return(src_len + dst_len);
	while (i < (src_len + dst_len) - 1)
	{
		if (i  < dstsize - 1)
			dst[i + dst_len] = src[i];
		i++;
	}
	if ( src_len + dst_len <= dstsize - 1)
		dst[src_len + i] = '\0';
	else
		dst[src_len + dst_len] = '\0';
	return (src_len + dst_len);
}
