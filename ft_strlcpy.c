/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:26:19 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/11 20:30:24 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (!(dst && src))
		return (0);
	while (count < size - 1 && (dst || src))
	{
		*(char *)(dst + count) = *(char *)(src + count);
		count++;
	}
	return (ft_strlen(dst));
}
