/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:09:50 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/18 17:23:55 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_trimstart(const char *str, const char *set)
{
	int		size_str;
	char	*start;
	int		i;

	size_str = ft_strlen(str);
	i = 0;
	while (i < size_str)
	{
		start = ft_strchr((char *)set, str[i]);
		if (!start)
			break ;
		i++;
	}
	return (i);
}

static int	get_trimend(const char *str, const char *set)
{
	char	*end;
	int		i;
	int		j;

	i = ft_strlen(str) - 1;
	j = 0;
	while (i >= 0)
	{
		end = ft_strrchr((char *)set, str[i]);
		if (!end)
		{
			break ;
		}
		i--;
		j++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		size_s1;
	int		start_pos;
	int		end_pos;
	int		i;

	if (set == NULL)
		return (ft_strdup(s1));
	start_pos = get_trimstart(s1, set);
	if (start_pos >= (int)ft_strlen(s1))
		return (ft_strdup(""));
	end_pos = get_trimend(s1, set);
	newstr = ft_calloc(ft_strlen(s1) - start_pos - end_pos + 1, sizeof(char));
	if (!newstr)
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
