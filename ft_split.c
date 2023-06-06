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

    set = &c;
	numcols = 0;
	s = ft_strtrim(s, set);
	if (!verify_alloc(s))
		return (0);
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
	return (numcols);
}

static void free_all(char **result, size_t cols)
{
    while (cols > 0)
        free(result[cols--]);
    result = NULL;
}

char **ft_split(char const *s, char c)
{
	char *tmp;
	char **result;
	size_t numcols;
    size_t currentcol;
	size_t bow;
	size_t eow; 

    tmp = (char *)s;
    bow = 0;
	currentcol = bow;
	if (s == NULL)
		return (NULL);
	numcols = ft_count_cols(tmp, c);
	if (numcols == 0)
		return (NULL);
	result = ft_calloc(numcols, sizeof(s));
    printf("Num Cols = %zu\n", numcols);
	if(!verify_alloc(result))
		return (NULL);
	while (*(s + bow  + eow) && currentcol < numcols - 1)
	{
        printf("CCol = %zu\n", numcols);
		bow += ft_skip_separator(s, c, bow);
		while (*(s + bow + eow) != c && *s)
           bow ++;
        result[currentcol++] = ft_substr(s, bow + 1, eow);
        if(!result[currentcol])
            free_all(result,currentcol);
        currentcol++;
	}
    if(currentcol < 0)
    {
		while (*(s + bow + eow) != c && *s)
            bow++;
        result[currentcol++] = ft_substr(s, bow + 1, eow);
        if(!result[currentcol])
            free_all(result,currentcol);
        currentcol++;
	}
	return (result);
}
