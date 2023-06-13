/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:36:50 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/13 19:30:49 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "./memo_handling/ft_memo_handling.h"

static size_t ft_skip_separator(const char *s, char c)
{
	size_t i;

	i = 0;
	while (s && *(s + i) && *(s + i) == c)
		i++;
	return (i);
}

static int ft_count_cols(char *s, char c)
{
	size_t numcols;
	size_t i;

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
			if (s && *(s + i) != c && *(s + i) != '\0')
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
    {
        free(result[--cols]);
		result[cols] = NULL;
    }
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
	result = ft_calloc(maxcols + 1, sizeof(char *));    
	if(!result)
		return (NULL);
    while (currentcol < maxcols)
    {
        s += ft_skip_separator(s, c);
        while (*(s + eow) != c && *(s + eow))
            eow ++;
        result[currentcol] = ft_substr(s, 0, eow);
        if(!result[currentcol])
            free_all(result,currentcol);
        s += eow;
        eow = 0;
	//	printf ("tab[%zu] = %s\n", currentcol, result[currentcol]);
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
	numcols = ft_count_cols(tmp, c);
    result = set_strcols(tmp, c, numcols);
    if(!result)
		free_all(result,numcols);
	return (result);
}
