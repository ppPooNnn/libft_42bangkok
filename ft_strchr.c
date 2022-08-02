#include "libft.h"

char    *ft_strchr (const char *s, int c)
{
    if ((*s == '\0') && (*s == (char)c))
        return ((char *)s)
    while (*s != '\0')
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    return (0);
}