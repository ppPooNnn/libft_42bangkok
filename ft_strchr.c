#include "libft.h"

char    *strchr (const char *s, int c)
{
    int count;

    count = 0;
    while (s[count] != '\0')
    {
        if (s[count] == c)
            return ((char *) s);
        count++;
    }
    return (0);
}