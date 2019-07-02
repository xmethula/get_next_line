/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:02:48 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/25 12:37:49 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		dlen;
	size_t		dslen;
	size_t		space;

	i = 0;
	dlen = ft_strlen(dst);
	dslen = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= dlen)
		return (ft_strlen(src) + dstsize);
	space = dstsize - (dlen + 1);
	while ((i < space) && (src[i] != '\0'))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dslen);
}
