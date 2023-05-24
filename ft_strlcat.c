/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 21:55:56 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/24 20:32:37 by hmontoya         ###   ########.fr       */
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
	if(dstsize == 0)
		return (src_len);
	if (dstsize < dst_len)
		return (dstsize + src_len);
	while (i + dst_len < dstsize - 1 && src[i])
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + src_len);
}
