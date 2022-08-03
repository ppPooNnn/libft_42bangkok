#include "libft.h"

void	*ft_memcpy (void *restrict dest, const void *restrict src, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		*(char *)(dest + count) = *(char *)(src + count);
	}
}