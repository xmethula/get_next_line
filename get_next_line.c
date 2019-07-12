/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 07:17:53 by lmohlala          #+#    #+#             */
/*   Updated: 2019/07/12 07:42:15 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			assignline(char **arr, char **line)
{
	char			*tmp;

	if ((*arr)[0] == '\0')
		return (0);
	if (ft_strchr(*arr, '\n'))
	{
		*(ft_strchr(*arr, '\n')) = '\0';
		*line = ft_strdup(*arr);
		tmp = ft_strdup(ft_strchr(*arr, '\0') + 1);
		free(*arr);
		if (tmp != NULL)
		{
			*arr = ft_strdup(tmp);
			free(tmp);
		}
	}
	else
	{
		*line = ft_strdup(*arr);
		ft_strdel(arr);
	}
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	static char		*arr[1000];
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	int				res;

	if ((fd < 0) || (read(fd, buf, 0) < 0) || (line == NULL))
		return (-1);
	if (arr[fd] == NULL)
		arr[fd] = ft_strnew(0);
	while (!(ft_strchr(arr[fd], '\n')) && (res = read(fd, buf, BUFF_SIZE)))
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
