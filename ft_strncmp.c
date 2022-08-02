#include "libft.h"

int ft_strncmp (const char *s1, const char *s2, size_t n)
{
    size_t count;
    int check;

    count = 0;
    while (count <= n && (*s1 || *s2))
    {
        if (*s1 != *s2)
        {
            check = (unsigned char *)s1 - (unsigned char *)s2;
            if (check > 0)
                return (1);
            else
                return (-1);
        }
        s1++;
        s2++;
        count++;
    }
    return (0);
}