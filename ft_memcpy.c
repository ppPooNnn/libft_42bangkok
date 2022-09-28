/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <puttasa@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:16:26 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/26 00:13:00 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n && ((char *)dest || (char *)src))
	{
		*(char *)(dest + count) = *(char *)(src + count);
		count++;
	}
	return (dest);
}
