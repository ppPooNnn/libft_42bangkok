/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <puttasa@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:16:23 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/05 22:29:39 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if (*(unsigned char *)(s + count) == (unsigned char)c)
			return ((void *)s + count);
		count++;
	}
	return (0);
}
