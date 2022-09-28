/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:25:20 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/25 15:17:04 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		sumsize;
	int		count;
	int		i;
	char	*str;

	count = 0;
	i = 0;
	if (!s1 || !s2)
		return (0);
	sumsize = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sumsize + 1);
	if (!str)
		return (0);
	while (count < sumsize && s1[i])
		str[count++] = s1[i++];
	i = 0;
	while (count < sumsize && s2[i])
		str[count++] = s2[i++];
	str[count] = '\0';
	return (str);
}
