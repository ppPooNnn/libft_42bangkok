/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:21:35 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/25 12:23:02 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	substr = malloc(len + 1);
	if (!substr || !s)
		return (0);
	ft_bzero (substr, len + 1);
	while (s[start] != '\0' && start < ft_strlen(s) && i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	return (substr);
}
