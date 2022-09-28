/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:58:04 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/27 16:19:13 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static	size_t	wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static	char	*wordcpy(char const *s, char c)
{
	char	*str;

	str = malloc(wordlen(s, c) + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s, wordlen(s, c) + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	res = malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!res)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c && *s)
		{
			res[i] = wordcpy(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	res[i] = NULL;
	return (res);
}
