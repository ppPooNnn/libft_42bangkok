/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <puttasa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:25:24 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/04 00:25:24 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp (const void *s1, const void *s2, size_t n)
{
	int		check;
	size_t	count;

	check = 0;
	count = 0;
	while (count < n && (((char *)s1)[count] || ((char *)s2)[count]))
	{
		if (((unsigned char *)s1)[count] != ((unsigned char *)s2)[count])
		{
			check = ((unsigned char *)s1)[count] - ((unsigned char *)s2)[count];
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