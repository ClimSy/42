/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjabeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 21:36:45 by pdjabeur          #+#    #+#             */
/*   Updated: 2014/11/26 05:25:21 by pdjabeur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *sg, const char *s1)
{
	int		i;
	int		j;

	i = 0;
	if (s1[0] == '\0')
		return ((char *)sg);
	if (ft_strlen((char *)s1) > ft_strlen((char *)sg))
		return (NULL);
	if (ft_strlen((char *)s1) == ft_strlen((char *)sg))
		if (s1[0] != sg[0])
			return (NULL);
	while (sg[i])
	{
		j = 0;
		while (sg[i] == s1[j])
		{
			j++;
			i++;
			if (s1[j] == '\0')
				return ((char *)sg + i - j);
		}
		i++;
	}
	return (NULL);
}
