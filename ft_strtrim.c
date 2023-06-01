/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:09:50 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/01 14:31:07 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int get_trimstart(const char *str, const char *set)
{
	int size_set;
	char *start;
	int i;

	size_set = ft_strlen(set);
	i = 0;
	while (i < size_set)
	{
		start = ft_strchr((char *)str,set[i]);
		if(!start)
		{
			break;	
		}
		i++;
	}
	return (i);
}

static int get_trimend(const char *str, const char *set)
{
	int size_set;
	char *end;
	int i;
	int j;
	
	size_set = ft_strlen(set);
	i = size_set - 1;
	j = 0;
	while (i >= 0)
	{
		end = ft_strrchr((char *)str,set[i]);
		if(!end)
		{
			break;
		}
		i--;
		j++;
	}
	return (j);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *newstr;
	int size_s1;
	int start_pos;
	int end_pos;
	int i;
	
	if(set == NULL)
		return (ft_strdup(s1));
	start_pos = get_trimstart(s1, set);
	end_pos   = get_trimend(s1, set);
	newstr = ft_calloc(ft_strlen(s1) - start_pos - end_pos, sizeof(char));
	if(!newstr)
		return (NULL);
	i = 0;
	s1 += start_pos;
	size_s1 = ft_strlen(s1);
	while (i < (size_s1 - end_pos))
	{
		newstr[i] = *(s1 + i);
		i++;
	}
	return (newstr);

}
