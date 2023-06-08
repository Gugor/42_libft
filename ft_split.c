/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:36:50 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/07 19:28:13 by hmontoya         ###   ########.fr       */
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
	char *set;
	size_t numcols;
	size_t i;

    set = &c;
	numcols = 0;
	i = 0;
	s = ft_strtrim(s, set);
	if (!s)
    {
        free(s);
        return (0);
    }
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

static void free_all(char **result, size_t cols)
{
    while (cols > 0)
        free(result[cols--]);
    free(result);
    result = NULL;
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
        free(result);
        return (NULL);
    }
    while (*(s + eow) && currentcol < maxcols)
    {
        s += ft_skip_separator(s, c);
        while (*(s + eow) != c && *(s + eow))
            eow ++;
        result[currentcol] = ft_substr(s, 0, eow);
        if(!result)
            free_all(result,currentcol);
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
	{
		result = ft_calloc(2, sizeof(s));
		result[0] = ft_strdup("");
		return (result);
	}
	numcols = ft_count_cols(tmp, c);
    result = set_strcols(tmp, c, numcols);
	/*while (*(tmp + eow) && currentcol < numcols)
	{
		tmp += ft_skip_separator(tmp, c);
		while (*(tmp + eow) != c && *(tmp + eow))
           eow ++;
        result[currentcol] = ft_substr(tmp, 0, eow);
        if(!result)
            free_all(result,currentcol);
		tmp += eow;
		eow = 0;
        currentcol++;
	}*/
	return (result);
}
