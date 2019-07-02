/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:56:41 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/21 12:25:59 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		start;
	int		row;
	char	**arr;

	i = 0;
	row = 0;
	if (s == NULL)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_countword(s, c)) + 1);
	if (arr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while ((s[i] != '\0') && (s[i] != c))
			i++;
		if (i > start)
			arr[row++] = ft_strndup(&s[start], i - start);
	}
	arr[row] = NULL;
	return (arr);
}
