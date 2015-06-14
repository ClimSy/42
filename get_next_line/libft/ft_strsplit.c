/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjabeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 15:23:42 by pdjabeur          #+#    #+#             */
/*   Updated: 2015/03/19 18:28:25 by pdjabeur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char *s, char c)
{
	int		wc;
	char	p;

	wc = 0;
	p = 0;
	while (*s)
	{
		if (*s != c && !p)
		{
			p = 1;
			wc++;
		}
		if (*s++ == c)
			p = 0;
	}
	return (wc);
}

int		ft_filltab(char *s, char c, char **tab)
{
	int		w;
	int		lc;

	w = 0;
	lc = 0;
	while (*s)
	{
		if (*s != c)
			lc++;
		if (*s++ == c && lc)
		{
			tab[w] = (char *)malloc(sizeof(char) * (lc + 1));
			if (!tab[w++])
				return (0);
			lc = 0;
		}
	}
	if (lc)
	{
		tab[w] = (char *)malloc(sizeof(char) * (lc + 1));
		if (!tab[w++])
			return (0);
	}
	tab[w] = NULL;
	return (1);
}

void	ft_fillstrings(char *s, char c, char **tab)
{
	int		w;
	int		lc;
	int		i;

	lc = 0;
	w = 0;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			tab[w][i++] = *s;
			lc++;
		}
		if (*s++ == c && lc)
		{
			lc = 0;
			tab[w][i] = '\0';
			w++;
			i = 0;
		}
	}
}

char	**ft_strsplit(char const *s, char c)
{
	char **tab;

	if (!s)
	{
		tab = (char **)malloc(sizeof(char *) * 1);
		tab[0] = NULL;
		return (tab);
	}
	tab = (char **)malloc(sizeof(char *) * (ft_wordcount((char *)s, c) + 1));
	if (!tab)
		return (NULL);
	if (!ft_filltab((char *)s, c, tab))
		return (NULL);
	ft_fillstrings((char *)s, c, tab);
	return (tab);
}
