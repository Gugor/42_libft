/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:59:46 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/09 18:19:45 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_tolower(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if (ch >= 'A' && ch <= 'Z')
		return ch + 32;
	else
		return ch;
}
