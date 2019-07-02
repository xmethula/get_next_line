/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 08:51:53 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/25 12:45:49 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while ((haystack[i] != '\0'))
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] == haystack[i + j] && (i + j) < len)
			{
				if (needle[j + 1] == '\0')
				{
					return (&((char *)haystack)[i]);
				}
				j++;
			}
		}
		i++;
	}
	return (0);
}
