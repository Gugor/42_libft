/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:04:42 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/14 18:07:58 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	is_neg;

	result = 0;
	is_neg = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_neg++;
		str++;
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			break ;
		if (ft_isdigit(*str))
			result = result * 10 + (*str - 48);
		str++;
	}
	if (is_neg)
		return (-result);
	return (result);
}
