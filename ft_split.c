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
#include "./memo_handling/ft_memo_handling.h"

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
    printf("Freeing memory...\n");
    while (cols > 0)
    {
        printf("Freeing %p\n",result[cols]);
        free(result[cols--]);
        printf("Freed:%d\n", result[cols-1] == NULL );
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
	result = ft_calloc(maxcols + 1, sizeof(s));    
    printf("Mem alloc d1(%lu * %lu) = %lu\n",maxcols + 1,sizeof(s),(maxcols + 1) * sizeof(s));
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
        LOG_MEMO_ALLOC(result[currentcol],ft_strlen(result[currentcol])*sizeof(result));
        if(!result[currentcol])
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
	if (tmp == NULL)
	{
		result = ft_calloc(2, sizeof(tmp));
		result[0] = ft_strdup("");
        if(result[0] == NULL)
            free_all(result,0);
		return (result);
	}
	tmp = ft_strtrim(s,&c);
    if(!tmp)
    {
        free(tmp);
        return (NULL);
    }
	numcols = ft_count_cols(tmp, c);
    printf("Mem items = %lu\n",numcols);
    result = set_strcols(tmp, c, numcols);
    if(!result)
        free_all(result,numcols);
	return (result);
}
