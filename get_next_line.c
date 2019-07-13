/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:17:26 by xmethula          #+#    #+#             */
/*   Updated: 2019/07/13 14:18:05 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			assignline(char **arrstr, char **line)
{
	char			*tmp;

	if ((*arrstr)[0] == '\0')
		return (0);
	if (ft_strchr(*arrstr, '\n') != NULL)
	{
		*(ft_strchr(*arrstr, '\n')) = '\0';
		*line = ft_strdup(*arrstr);
		tmp = ft_strdup(ft_strchr(*arrstr, '\0') + 1);
		free(*arrstr);
		if (tmp)
		{
			*arrstr = ft_strdup(tmp);
			free(tmp);
		}
	}
	else
	{
		*line = ft_strdup(*arrstr);
		ft_strdel(arrstr);
	}
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	int				res;
	char			buf[BUFF_SIZE + 1];
	static char		*arr[999];
	char			*tmp;

	if (fd < 0 || read(fd, buf, 0) < 0 || line == NULL)
		return (-1);
	if (!(arr[fd]))
		arr[fd] = ft_strnew(0);
	while (!ft_strchr(arr[fd], '\n') && (res = read(fd, buf, BUFF_SIZE)))
	{
		buf[res] = '\0';
		tmp = ft_strjoin(arr[fd], buf);
		free(arr[fd]);
		arr[fd] = ft_strdup(tmp);
		free(tmp);
	}
	if (res < 0)
		return (-1);
	return (assignline(&arr[fd], line));
}
