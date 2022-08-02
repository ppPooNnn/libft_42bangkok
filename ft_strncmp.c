#include "libft.h"

int ft_strncmp (const char *s1, const char *s2, size_t n)
{
    size_t count;
    int check;

    count = 0;
    while (count <= n && (s1[count] || s2[count]))
    {
        if (s1[count] != s2[count])
        {
            check = (unsigned char)s1[count] - (unsigned char)s2[count];
            if (check > 0)
                return (1);
            else if (check < 0)
                return (-1);
            else
                return (0);
        }
        count++;
    }
    return (0);
}