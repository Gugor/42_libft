/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:08:26 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/30 16:51:00 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int abs_sign(int n, int *neg)
{
    if (n < 0)
    {
        *neg = 1;
        n *= -1;
    }	
	return (n);
}

int get_numsize(int num)
{
	int size;

	size = 0;
    while (num > 0)
    {
      num /= 10;
      size++;
    }
	return (size);
}

char *ft_itoa(int n)
{
    char *num;
    int is_neg;
    int size;
    
    is_neg = 0;
    size   = 0;
	if (n == -2147483647)
		return (ft_strdup("-2147483647"));
	size = get_numsize(abs_sign(n, &is_neg));
	if (n == 0)
		return (ft_strdup("0"));
    num  = (char *)ft_calloc(size + 2, sizeof(char));
    if (!num)
        return (NULL);
    num = num + size + 1;
    while (n > 0)
    {
        *num  = n % 10 + 48;
        n /= 10;
		num--;
    }
    if (is_neg)
      num[0] = '-';
    return (num);
}
