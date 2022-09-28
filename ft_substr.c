/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:21:35 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/27 16:46:35 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	relen;
	char	*substr;

	i = 0;
	if (!s)
		return (0);
	relen = len;
	if (start > ft_strlen(s))
		relen = 0;
	else if (ft_strlen(s) - start < len)
		relen = ft_strlen(s) - start;
	substr = malloc(relen + 1);
	if (!substr)
		return (0);
	ft_bzero (substr, relen + 1);
	while (s[start] != '\0' && start < ft_strlen(s) && i < relen)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	return (substr);
}
