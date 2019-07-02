/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:58:30 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/13 09:24:48 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	else if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}
