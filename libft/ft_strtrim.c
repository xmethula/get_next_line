/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 08:06:22 by xmethula          #+#    #+#             */
/*   Updated: 2019/07/09 12:34:02 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_start(char const *s, size_t *i)
{
	while ((s[*i] == ' ') || (s[*i] == '\n') || (s[*i] == '\t'))
		(*i)++;
}

static void		ft_end(char const *s, size_t *j)
{
	*j = ft_strlen(s) - 1;
	while ((s[*j] == ' ') || (s[*j] == '\n') || (s[*j] == '\t'))
		(*j)--;
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	ft_start(s, &i);
	if (s[i] == '\0')
		return (ft_strdup(&s[i]));
	ft_end(s, &j);
	str = (char *)malloc(sizeof(char) * (j - i) + 2);
	if (str == NULL)
		return (NULL);
	while ((i + k) <= j)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
