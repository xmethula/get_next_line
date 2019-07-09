/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 07:17:53 by lmohlala          #+#    #+#             */
/*   Updated: 2019/07/09 15:54:00 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			ft_readline(char **arrayh, char **line)
{
	char			*temp;

	if ((*arrayh)[0] == '\0')
		return (0);
	if (ft_strchr(*arrayh, '\n') != NULL)
	{
		*(ft_strchr(*arrayh, '\n')) = '\0';
		*line = ft_strdup(*arrayh);
		temp = ft_strdup(ft_strchr(*arrayh, '\0') + 1);
		free(*arrayh);
		if (temp)
		{
			*arrayh = ft_strdup(temp);
			free(temp);
		}
	}
	else
	{
		*line = ft_strdup(*arrayh);
		ft_memdel((void **)arrayh);
	}
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	int				rval;
	char			buf[BUFF_SIZE + 1];
	static char		*arr[1000];
	char			*temp;

	if (fd < 0 || read(fd, buf, 0) < 0 || line == NULL)
		return (-1);
	if (!(arr[fd]))
		arr[fd] = ft_strnew(0);
	while (!ft_strchr(arr[fd], '\n') && (rval = read(fd, buf, BUFF_SIZE)))
	{
		buf[rval] = '\0';
		temp = ft_strjoin(arr[fd], buf);
		free(arr[fd]);
		arr[fd] = ft_strdup(temp);
		free(temp);
	}
	if (rval < 0)
		return (-1);
	return (ft_readline(&arr[fd], line));
}
