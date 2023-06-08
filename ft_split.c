/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:36:50 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/08 19:29:25 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_skip_separator(const char *s, char c)
{
	size_t i;

	i = 0;
	while (*(s + i) == c)
		i++;
	return (i);
}

static int ft_count_cols(char *s, char c)
{
	size_t numcols;
	size_t i;

	numcols = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			i += ft_skip_separator(s + i, c);
			numcols++;
		}
		else
			i++;
	}
	numcols++;
	return (numcols);
}

static void free_all(char **result, size_t cols, char *s)
{
    while (cols > 0)
        free(result[cols-- - 1]);
    free(result);
}

static char **set_strcols(char *s, char c, size_t maxcols)
{
    char **result;
    size_t currentcol;
    size_t eow;
    
    currentcol = 0;
    eow = 0;
	result = ft_calloc(maxcols + 1, sizeof(s));
	if(!result)
    {
		free(s);
        free(result);
        return (NULL);
    }
    while (*(s + eow) && currentcol < maxcols)
    {
        s += ft_skip_separator(s, c);
        while (*(s + eow) != c && *(s + eow))
            eow ++;
		if(eow > 0)
        	result[currentcol] = ft_substr(s, 0, eow);
        if(!result[currentcol])
            free_all(result, maxcols);
		s += eow;
        eow = 0;
        currentcol++;
	}
    return (result);
}

char **ft_split(char const *s, char c)
{
	char *tmp;
	char **result;
	size_t numcols;

    tmp = (char *)s;
	if (s == NULL)
		return (NULL);
	tmp = ft_strtrim(s, &c);
	if (!tmp)
    {
        free(tmp);
        return (NULL);
    }
	numcols = ft_count_cols(tmp, c);
    result = set_strcols(tmp, c, numcols);
	return (result);
}
