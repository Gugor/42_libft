/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:36:50 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/07 19:25:20 by hmontoya         ###   ########.fr       */
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
	i = 0;
	s = ft_strtrim(s, set);
	if (!verify_alloc(s))
		return (0);
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
    result = NULL;
}

char **ft_split(char const *s, char c)
{
	char *tmp;
	char **result;
	size_t numcols;
    size_t currentcol;
	size_t eow; 

    tmp = (char *)s;
	eow = 0;
	currentcol = 0;
	if (s == NULL)
	{
		result = ft_calloc(2, sizeof(s));
		result[0] = ft_strdup("");
		return (result);
	}
	numcols = ft_count_cols(tmp, c);
	result = ft_calloc(numcols + 1, sizeof(s));
	if(!verify_alloc(result))
		return (NULL);
	while (*(tmp + eow) && currentcol < numcols)
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
	}
	return (result);
}
