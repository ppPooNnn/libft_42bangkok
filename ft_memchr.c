#include "libft.h"

void	*ft_memchr (const void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if (*(char *)(s + count) == (unsigned char)c)
			return((void *)s);
		count++;
	}
	return (0);
}