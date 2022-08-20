/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:54:08 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/19 23:41:33 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[0])
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		while (big[i + j] && little[j] && (little[j] == big[i + j]))
			j++;
		if (j == len)
			return ((char *)&big[i - j + 1]);
		i++;
	}
	return (0);
}
