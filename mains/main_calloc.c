/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:33:26 by hmontoya          #+#    #+#             */
/*   Updated: 2023/05/25 16:28:28 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	printf("\33[1;33mmain_calloc.c\33[1;0m\n");
	int size = 8459;
	int *blue = (int*)ft_calloc(size, sizeof(int));
	int *red  = (int*)calloc(size,sizeof(int));
	int i;

	if(memcmp(red,blue, size * sizeof(int)))
	{
		printf("\33[1;32m[SUCCES]\33[1;0m\n");
		i = 0;
		while (i <= size)
		{
			printf("Iter = %i\n", i);
			printf(">>ft_\33[1;32m blue[%p] = %i (%lu) \33[1;0m\n", blue, *blue,sizeof(blue));
			printf(">>so_\33[1;32m red[%p]  = %i (%lu)\33[1;0m\n", red, *red, sizeof(red));
			printf("%d\n",*blue - *red);
			printf("..................");
			red += i++;
		}
	}	
	else
	{
		printf("\33[1;31m[FAIL]\33[1;0m\n");
		i = 0;
		while (i < size)
		{
			printf("Iter = %i\n", i);
			printf(">>ft_\33[1;32m blue[%p] = %i (%lu) \33[1;0m\n", blue, *blue,sizeof(blue));
			printf(">>so_\33[1;32m red[%p]  = %i (%lu)\33[1;0m\n", red, *red, sizeof(red));
			printf("%d\n",*blue - *red);
			printf("..................\n");
			red += i++;

		}
	}
	return (0);
}
