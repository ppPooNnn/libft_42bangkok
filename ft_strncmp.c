#include "libft.h"

int ft_strncmp (const char *s1, const char *s2, size_t n)
{
    int count;

    count = 0;
    while (count <= n)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        count++;
    }
    return (0);
}