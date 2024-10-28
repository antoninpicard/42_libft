#include "libft.h"

int ft_isalnum(char c)
{
    return (isalpha(c) || isdigit(c));
}