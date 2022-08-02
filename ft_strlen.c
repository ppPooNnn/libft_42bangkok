#include "libft.h"

size_t ft_strlen (const char *str)
{
    size_t len;

    len = 0;
    while (*str != '\0')
    {
        str++;
        len++;
    }
    return (len);
}