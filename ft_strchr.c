#include "libft.h"

char    *ft_strchr (const char *s, int c)
{
    int count;

    count = 0;
    if (s[count] == '\0')
        return ((char *) s);
    while (s[count] != '\0')
    {
        if (s[count] == (char)c)
            return ((char *) s);
        count++;
    }
    return (0);
}