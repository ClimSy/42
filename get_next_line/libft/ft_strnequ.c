/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjabeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/07 01:59:11 by pdjabeur          #+#    #+#             */
/*   Updated: 2015/01/13 18:03:49 by pdjabeur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;

	if (!s1 || !s2)
		return (0);
	i = (ft_strncmp(s1, s2, n) == 0 ? 1 : 0);
	return (i);
}
