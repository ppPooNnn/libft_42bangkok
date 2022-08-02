#include "libft.h"

char    *ft_strchr (const char *s, int c)
{
    int count;

    count = 0;
    while ((s[count] != '\0') && (s[count] != (char)c))
        count++;
    if (s[count] == (char)c)
        return ((char *)c)
    return (0);
}