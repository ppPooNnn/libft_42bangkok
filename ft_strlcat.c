/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 01:42:39 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/13 13:48:59 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (dstlen >= size)
		return (size + ft_strlen(src));
	while (dstlen < size - 1 && *src != '\0')
	{
		*(dst + dstlen) = *src++;
		dstlen++;
	}
	*(dst + dstlen) = '\0';
	return (dstlen + ft_strlen(src));
}
