/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 07:38:32 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/21 13:37:53 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
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
	}
}
