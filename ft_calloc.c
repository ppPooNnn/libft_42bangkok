/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:38:39 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/27 16:52:44 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*address;

	if (!(count + 1) || !(size + 1))
		return (0);
	address = malloc(count * size);
	if (!address)
		return (0);
	ft_bzero(address, count * size);
	return (address);
}
