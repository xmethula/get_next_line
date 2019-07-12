/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:18:53 by xmethula          #+#    #+#             */
/*   Updated: 2019/07/09 07:38:17 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*ptr;
	unsigned char	ch;

	i = 0;
	ptr = (char *)b;
	ch = (unsigned char)c;
	while (i < len)
	{
		ptr[i] = ch;
		i++;
	}
	return (b);
}
