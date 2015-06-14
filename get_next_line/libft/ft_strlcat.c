/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjabeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 22:38:01 by pdjabeur          #+#    #+#             */
/*   Updated: 2015/01/13 17:18:55 by pdjabeur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		a;
	size_t		b;
	size_t		i;

	a = ft_strlen(dest);
	b = ft_strlen(src);
	i = 0;
	if (n < a)
		return (b + n);
	while (src[i] && a + i + 1 < n)
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (a + b);
}
