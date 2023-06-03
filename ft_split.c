/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:36:50 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/03 22:27:48 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_cols(char *s, char c)
{
	char *set;
	int numcols;

	numcols = 0;
	set = &c;
	s = ft_strtrim(s, set);
	if (!s)
	{
		free(s);
		return (0);
	}
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
			numcols++;
		}
		s++;
	}
	numcols++;
	return (numcols);
}

static char **ft_calloc2d(char const *s, char c, int numcols)
{
	char **tmp;
	int i;

	i = 0;
	tmp = (char **)malloc(numcols * sizeof(char **));
	if (!tmp)
	{
		free(tmp);
		return (NULL);
	}
	numcols = 0;
	printf("2d malloc created\n");
	while (*(s + i))
	{
		if(*(s + i) == c)
		{
			tmp[numcols] = ft_calloc(i - 1, sizeof(s));
			printf("Coll allocated (%p)\n", );
			if (!tmp[numcols])
				return (NULL);
			numcols++;		
		}
		i++;
	}
	printf("2d cols and rows allocated => %i\n", numcols);
	return (tmp);
}

char **ft_split(char const *s, char c)
{
	char *tmp;
	char **result;
	int numcols;
	int col;
	int row;
	int i;

	if (s == NULL)
		return (NULL);
	tmp = (char *)s;
	numcols = ft_count_cols(tmp, c);
	printf("Numcols: %i\n", numcols);
	if (numcols == 0)
		return (NULL);
	result = ft_calloc2d(tmp, c, numcols);
	if(!result)
	{
		free(result);
		return (NULL);
	}
	printf("Calloc 2d done!!");
	col = 0;
	row = 0;
	i = 0;
	while (*s && col <= numcols - 1)
	{
		result[col++][row] = *(s + row); 
		if (*s == c)
		{
			row = 0;
			s += row + 1;
		} 
		i++;
	}
	return (result);
}
