/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:29:48 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/13 09:21:16 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	else if (ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}
