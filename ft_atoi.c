
#include "libft.h"

int ft_atoi(const char *str)
{
    int result;
    _Bool is_neg;
    _Bool is_num;

    result = 0;
    is_neg = 0;
    is_num = 0;
    while (*str)
    {
        if(!is_num && ft_isalpha(*str))
                break;
        if(*str == '-' )
            is_neg++;
        if(ft_isdigit(*str))
        {
            result = result * 10 + (*str - 48);
        }
        str++;
    }
    if(is_neg)
        return (-result);
    return (result);
}
