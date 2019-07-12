/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:36:05 by xmethula          #+#    #+#             */
/*   Updated: 2019/07/09 08:53:51 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dptr;
	unsigned char	*sptr;
	unsigned char	ch;

	i = 0;
	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	ch = (unsigned char)c;
	while (i < n)
	{
		dptr[i] = sptr[i];
		if (sptr[i] == ch)
			return (&dptr[i + 1]);
		i++;
	}
	return (NULL);
}
