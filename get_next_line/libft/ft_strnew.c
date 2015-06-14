/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjabeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/04 03:32:31 by pdjabeur          #+#    #+#             */
/*   Updated: 2014/12/04 03:45:02 by pdjabeur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*c;

	c = (char *)malloc(sizeof(size_t) * size);
	if (c == NULL)
		return (NULL);
	ft_memset(c, '\0', size);
	return (c);
}
