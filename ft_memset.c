#include "libft.h"

void	*ft_memset (void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count <= n)
	{
		s[count] = (char)c;
		count++;
	}
}