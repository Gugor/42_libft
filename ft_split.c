/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:36:50 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/06 18:04:56 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_skip_separator(const char *s, char c, int pos)
{
	int i;

	i = pos;
	while (*(s + i) == c)
		i++;
	return (i);
}

static int verify_alloc(void *alloc)
{
	if(!alloc)
	{
		free(alloc);
		return (0);
	}
	else 
		return (1);
}

static int ft_count_cols(char *s, char c)
{
	char *set;
	int numcols;

	numcols = 0;
	set = &c;
	s = ft_strtrim(s, set);
	if (!verify_alloc(s))
		return (0);
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
	int last_sep_pos;

	i = 0;
	tmp = (char **)malloc(numcols * sizeof(char **));
	if (!verify_alloc(tmp))
		return (NULL);
	numcols = 0;
	last_sep_pos = i;
	while (*(s + i))
	{
		if(*(s + i) == c)
		{
			i += ft_skip_separator(s, c, i);
			last_sep_pos = i - 1;
			tmp[numcols] = ft_calloc(i - 2, sizeof(s));
			if (!tmp[numcols])
				return (NULL);
			numcols++;		
		}
		i++;
	}
	if(i > 0)
		tmp[++numcols] = ft_calloc(i - last_sep_pos - 1, sizeof(s));
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
	if(!verify_alloc(result))
		return (NULL);
	printf("Calloc 2d done!!");
	col = 0;
	row = 0;
	i = 0;
	while (*s && col < numcols - 1)
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
