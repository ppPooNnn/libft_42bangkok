/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 18:16:33 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/06 04:19:49 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	c;

	c = 0;
	if (!(dest || src))
		return (dest);
	if (dest > src)
	{
		while (n > 0)
		{
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*((unsigned char *)dest + c) = *((unsigned char *)src + c);
			c++;
		}
	}
	return (dest);
}
