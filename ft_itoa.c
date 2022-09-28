/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:09:13 by puttasa           #+#    #+#             */
/*   Updated: 2022/08/27 10:29:16 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	check_sizenum(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*res;
	long	num;

	size = check_sizenum(n);
	num = n;
	res = malloc(size + 1);
	if (!res)
		return (0);
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	if (num == 0)
		res[0] = '0';
	res[size] = '\0';
	size--;
	while (num)
	{
		res[size] = (num % 10) + '0';
		num = num / 10;
		size--;
	}
	return (res);
}
