#include "libft.h"

int ft_strncmp (const char *s1, const char *s2, size_t n)
{
    size_t count;

    count = 0;
    while (count <= n && *s1 != '\0' && s2 != '\0')
    {
        if (*s1 != *s2)
            return ((const char *)s1 - (const char *)s2);
        s1++;
        s2++;
        count++;
    }
    return (0);
}