/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <puttasa@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:16:28 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/04 00:16:28 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset (void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		*(char *)(s + count) = (char)c;
		count++;
	}
	return (s);
}