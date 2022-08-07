#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	while (count < n && (dst || src))
	{
		*(char *)(dest + count) = *(char *)(src + count);
		count++;
	}
	return (dst);
}