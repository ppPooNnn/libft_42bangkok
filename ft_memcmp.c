#include "libft.h"

int	ft_memcmp (const void *s1, const void *s2, size_t n)
{
	int		check;
	size_t	count;

	check = 0;
	count = 0;
	while (count < n (*(char *)s1 || *(char *)s2))
	{
		if (*(char *)(s1 + count) != *(char *)(s2 + count))
		{
			check = (unsigned char *)(s1 + count) - (unsigned char *)(s2 + count);
			if (check > 0)
				return (1);
			else if (check < 0)
				return (-1);
			else
				return (0);
		}
		count++;
	}
}