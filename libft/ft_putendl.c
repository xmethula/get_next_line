/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:22:16 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/25 12:58:27 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int		i;
	char	*str;

	i = 0;
	if (s == NULL)
	{
		str = "(null)";
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	else
	{
		while (s[i] != '\0')
		{
			ft_putchar(s[i]);
			i++;
		}
		ft_putchar('\n');
	}
}
