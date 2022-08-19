/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:54:08 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/19 23:10:16 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	strcount;

	count = 0;
	strcount = 0;
	if (!little)
		return ((char *)big);
	while (count < len && *big != '\0')
	{
		while (*(big + count + strcount) && *(little + strcount) && *(little + count) == *(big + count + strcount))
			strcount++;
		if (strcount == len)
			return ((char *)(big + count));
		count++;
	}
	return (0);
}
