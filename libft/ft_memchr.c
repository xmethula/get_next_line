/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 07:55:50 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/24 15:37:18 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sptr;
	unsigned char	ch;

	i = 0;
	sptr = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (sptr[i] == ch)
			return (&sptr[i]);
		i++;
	}
	return (NULL);
}
