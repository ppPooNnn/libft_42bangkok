/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:20:33 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/26 15:52:59 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	checkchar(char const *set, char const c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	head;
	size_t	tail;
	size_t	count;
	size_t	len;

	count = 0;
	if (!s1 || !set)
		return (0);
	head = 0;
	tail = ft_strlen(s1);
	while (checkchar(set, s1[head]))
		head++;
	while (checkchar(set, s1[tail - 1]) && tail > head)
		tail--;
	len = tail - head;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	while (count < len)
		res[count++] = s1[head++];
	res[count] = '\0';
	return (res);
}
