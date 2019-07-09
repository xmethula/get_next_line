/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 07:17:53 by lmohlala          #+#    #+#             */
/*   Updated: 2019/07/09 16:57:46 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			assline(char **arrstr, char **line)
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
		if (tmp != NULL)
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
	static char		*str[1000];
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	int				res;

	if ((fd < 0) || (read(fd, buf, 0) < 0) || (line == NULL))
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(0);
	while (!(ft_strchr(str[fd], '\n')) && (res = read(fd, buf, BUFF_SIZE)))
	{
		tmp = ft_strjoin(str[fd], buf);
		free(str[fd]);
		str[fd] = ft_strdup(tmp);
		free(tmp);
	}
	if (res < 0)
		return (-1);
	return (assline(&str[fd], line));
}
