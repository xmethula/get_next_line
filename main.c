/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:15:01 by xmethula          #+#    #+#             */
/*   Updated: 2019/07/02 10:17:05 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int	fd;
	char	*line;

	if (argc < 2)
	{
		ft_putendl("Failed, too few arguments!");
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		if (line)
			ft_strdel(&line);
	}
	if (get_next_line(fd, &line) == -1)
		ft_putendl("An error has occur!");
	else if (get_next_line(fd, &line) == 0)
		ft_putendl("The entire file has been reed!");
	if (line)
		free(line);
	close(fd);
	/**sleep(60);**/
	return (0);
}
