
#include "libft.h"

int ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int ft_atoi(const char *str)
{
    int result;
    int is_neg;
    
	result = 0;
    is_neg = 0;
	while (ft_isspace(*str))
		str++;
    if(*str == '-' || *str == '+')
	{
		if(*str == '-')
			is_neg++;
		str++;
	}
    while (*str)
    {
		if(!ft_isdigit(*str))
			break;
        if(ft_isdigit(*str))
            result = result * 10 + (*str - 48);
        str++;
    }
    if(is_neg)
        return (-result);
    return (result);
}
