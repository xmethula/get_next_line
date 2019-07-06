/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseperep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 10:12:06 by kseperep          #+#    #+#             */
/*   Updated: 2019/07/04 11:50:05 by kseperep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <stdio.h>

int		main(void)
{
	int	ret;
	int	line;
	int	fd;
	int fd1;
	char	*buf;

	line = 0;
//	if (argc == 2)
//	{
		fd = open("a.txt", O_RDONLY);
		fd1 = open("b.txt", O_RDONLY);
		while ((ret = get_next_line(fd, &buf)) > 0)
		{
			printf("Return: %d\t Line %d\t %s\n", ret, ++line, buf);
			free(buf);
		}
		if (ret == -1)
			printf("\nError\n");
		else if (ret == 0)
			printf("\nEnd of File\n");
		close(fd);
//	}
	ft_putnbr(fd);
	ft_putchar('\n');
//	if (argc == 1)
//	{
		while ((ret = get_next_line(fd1, &buf)) > 0)
        {
        	printf("Return: %d\t Line %d\t %s\n", ret, ++line, buf);
            free(buf);
       }
       if (ret == -1)
           printf("\nError\n");
       else if (ret == 0)
          printf("\nEnd of File\n");
       close(fd1);
// 	}
 	return (0);
}
