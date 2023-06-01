/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:13:55 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/01 13:57:27 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main (void)
{
	char s1[22] = "super cali super" ;
	char set[6] = "super";
	char *result;

	/*printf("Escribe una cadena para cortar:\n");
	scanf("%s", s1);
	printf("Escribe el set de caracteres a cortar:\n");
	scanf("%s", set);
	printf("Preparando trim\n");*/
	result = ft_strtrim(s1,set);
	printf("Result:\n>>%s", result);
	if (result)
		free(result);
	return (0);
}
