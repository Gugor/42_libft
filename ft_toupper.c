/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:32:31 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/09 18:17:25 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if (ch >= 97 && ch <= 122)
		return ch - 32;
	else
		return ch;
}
