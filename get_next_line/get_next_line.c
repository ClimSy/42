/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjabeur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/16 00:07:12 by pdjabeur          #+#    #+#             */
/*   Updated: 2015/03/26 17:06:04 by pdjabeur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int const fd, char **line)
{
	static char		*str;
	char			*tmp;

	if (str == NULL)
	{
		str = ft_strnew(0);
		if (!line || fd < 0)
			return (-1);
		str = lecture(fd, str);
	}
	if (str && (ft_strlen(str) > 1))
	{
		tmp = ft_strdup(str);
		ft_strclr((ft_strchr(tmp, '\n') + 1));
		str = (str + ft_strlen(tmp));
		tmp[(ft_strlen(tmp)) - 1] = '\0';
		*line = ft_strdup(tmp);
		return (1);
	}
	str = ft_strdup(*line);
	tmp = ft_strdup(str);
	free(tmp);
	return (0);
}

char	*lecture(int const fd, char *ptr)
{
	int		ret;
	char	*buf;

	buf = (char *)malloc(sizeof(char) * BUF_SIZE + 1);
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		if (ret < BUF_SIZE)
			ft_strclr(buf + ret);
		ptr = ft_strjoin(ptr, buf);
	}
	free (buf);
	return (ptr);
}
