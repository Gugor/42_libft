/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:36:50 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/06 20:34:03 by hmontoya         ###   ########.fr       */
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
	size_t numcols;
	size_t i;

	numcols = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			i += ft_skip_separator(s, c, i);
			numcols++;
		}
		i++;
	}
	if (i > 0)
		numcols++;
	printf("Cols %i\n", numcols);
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
	size_t first_pos;
	size_t last_pos

	if (s == NULL)
		return (NULL);
	tmp = ft_strtrim(s);
	if (!verify_alloc(tmp))
		return (NULL);
	numcols = ft_count_cols(tmp, c);
	printf("Numcols: %i\n", numcols);
	if (numcols == 0)
		return (NULL);
	result = ft_calloc(numcols * sizeof(s)):
	printf("Result allocated: %p\n", result);
	if(!verify_alloc(result))
		return (NULL);
	printf("Calloc 2d done!! (%p)(%lu)\n", result, sizeof(result));
	i = 0;
	printf("Preparing result filling...\n");
	while (*s && numcols--)
	{
		if (*(s + i) == c)
		{
			i += ft_skip_separator(s, c, i);
			
			row = 0;
			col++;
		    i += ft_skip_separator(s, c, i);
			last_sep_pos = i -esult += i;
			printf("Post col %i row %i iter %i", col, row, i);
		} 
		else
		row++;
		i++;
	}
	return (result);
}
