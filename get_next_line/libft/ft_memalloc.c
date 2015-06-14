/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjabeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 03:00:26 by pdjabeur          #+#    #+#             */
/*   Updated: 2015/01/13 14:34:45 by pdjabeur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*c;

	c = (char *)malloc(sizeof(size_t) * size);
	if (c == NULL)
		return (NULL);
	ft_memset((void *)c, '0', size);
	return (c);
}
