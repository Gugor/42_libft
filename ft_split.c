/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:36:50 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/03 20:28:29 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_cols(char *s, char c)
{
	char *set;
	int numcols;

	numcols = 0;
	set = (char *)c;
	s = ft_strtrim(s, set);
	if (!s)
	{
		free(s);
		return (NULL);
	}
	while (*s)
	{
		if (*s == c)
			numcols++;
		tmp++;
	}
	return (numcols);
}

static char **ft_calloc2d(char const *s, char c, int numcols)
{
	char **tmp;
	int i;

	i = 0;
	if (numcols >= 1)
		tmp = (char **)malloc(numcols * sizeof(char **));
	else
		return ((char **)ft_strdup(s));
	if (!result)
	{
		free(result)
		return (NULL);
	}
	numcols = 0;
	while (*(s + i))
	{
		if(*(s + i) == c)
		{
			tmp[numcols] = ft_calloc(i - 1, sizeof(s));
			if (!tmp[numcols])
				return (NULL);
			numcols++;		
		}
	}	
	return (tmp);
}

char **ft_split(char const *s, char c)
{
	char *tmp;
	char **result;
	int numcols;

	if (s == NULL)
		return (NULL);
	numcols = ft_count_cols(tmp);
	result = ft_calloc2d(s, c, numcols);
	if(!result)
	{
		free(result);
		return (NULL);
	}
	while ()
	{
		
	}
}
