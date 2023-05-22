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
size_t ft_get_dstcat_len(size_t dstsrc, size_t dstsize)
{
    if(dstsize <= dstsrc)
        return (dstsize - 1);
    else
        return (dstsrc);
}
size_t ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t src_len;
	size_t dst_len;
	size_t i;
    size_t newdstsize;
	
    src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
    newdstsize = ft_get_dstcat_len(dst_len + src_len, dstsize);
	if(dstsize <= 0)
		return(src_len + dst_len);
    if(dstsize <= dst_len)
        return(dst_len + src_len);
	while (i + dst_len < newdstsize)
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	if ( dstsize<= dst_len + src_len)
		dst[dstsize] = '\0';
	else
		dst[src_len + dst_len] = '\0';
	return (src_len + dst_len);
}
