/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:36:50 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/20 19:10:01 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_skip_separator(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) == c)
		i++;
	return (i);
}

static int	ft_count_cols(char *s, char c)
{
	size_t	numcols;
	size_t	i;

	numcols = 0;
	i = 0;
	i += ft_skip_separator(s, c);
	if (*(s + i) == '\0')
		return (0);
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			i += ft_skip_separator(s + i, c);
			if (*(s + i) && *(s + i) != c)
				numcols++;
		}
		else
			i++;
	}
	return (++numcols);
}

static char	**free_all(char **result, size_t cols)
{
	while (cols > 0)
		free(result[--cols]);
	free(result);
	return (NULL);
}

static char	**set_strcols(char *s, char c, size_t maxcols)
{
	char	**result;
	size_t	currentcol;
	size_t	end;

	currentcol = 0;
	end = 0;
	result = ft_calloc(maxcols + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (currentcol < maxcols)
	{
		s += ft_skip_separator(s, c);
		while (*(s + end) != c && *(s + end))
			end ++;
		result[currentcol] = ft_substr(s, 0, end);
		if (!result[currentcol])
			return (free_all(result, currentcol));
		s += end;
		end = 0;
		currentcol++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	*tmp;
	char	**result;
	size_t	numcols;

	tmp = (char *)s;
	numcols = ft_count_cols(tmp, c);
	result = set_strcols(tmp, c, numcols);
	return (result);
}
