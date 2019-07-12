/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:35:35 by xmethula          #+#    #+#             */
/*   Updated: 2019/07/09 09:51:50 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1ptr;
	unsigned char	*s2ptr;

	i = 0;
	s1ptr = (unsigned char *)s1;
	s2ptr = (unsigned char *)s2;
	while (i < n)
	{
		if (s1ptr[i] == s2ptr[i])
			i++;
		else
			return (s1ptr[i] - s2ptr[i]);
	}
	return (0);
}
