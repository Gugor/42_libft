/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:01:46 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/27 16:33:51 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char units;
	int neg;
	units = '0';
	if (n < 0)
	{
		neg = 1;
		ft_putnbr_fd(-n, fd);	
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + units, fd);		
	}
	else 
	{
		if(neg == 1)
			n *= -1;
		ft_putchar_fd(n + units, fd);
	}
}
