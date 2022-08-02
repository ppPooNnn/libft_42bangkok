/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 23:16:14 by puttasa           #+#    #+#             */
/*   Updated: 2022/07/31 23:19:53 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>


int		ft_isalpha (int c);
int		ft_isdigit (int c);
int		ft_isalnum (int c);
int		ft_isascii (int c);
int		ft_isprint (int c);
int		ft_toupper (int c);
int		ft_tolower (int c);
int		ft_strncmp (const char *s1, const char *s2, size_t n)
char	*ft_strchr (const char *s, int c);
char	*ft_strrchr (const char *s, int c);
void	*ft_memset (void *s, int c, size_t n)
size_t	ft_strlen (const char *str);
#endif
