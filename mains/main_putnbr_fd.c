/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:15:02 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/27 16:24:55 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	int num;
	printf("Inserta un numero:");
	scanf("%i",&num);
	ft_putnbr_fd(num,1);
}
