/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <puttasa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:25:24 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/05 22:29:54 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		check;
	size_t	count;

	check = 0;
	count = 0;
	if (n == 0)
		return (0);
	while (count < n)
	{
		if (((unsigned char *)s1)[count] != ((unsigned char *)s2)[count])
		{
			check = ((unsigned char *)s1)[count] - ((unsigned char *)s2)[count];
			return (check);
		}
		count++;
	}
	return (0);
}
