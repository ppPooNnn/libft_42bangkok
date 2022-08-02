#include "libft.h"

void	*ft_memset (void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		*(char *)(s + count) = (char)c;
		count++;
	}
	return (s);
}