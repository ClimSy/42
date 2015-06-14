/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjabeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 21:27:30 by pdjabeur          #+#    #+#             */
/*   Updated: 2015/01/13 17:31:29 by pdjabeur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	d;

	i = ft_strlen(s);
	d = c;
	while (i >= 0 && s[i] != d)
	{
		i--;
		if (!s[i])
			return (NULL);
	}
	return ((char *)s + i);
}
