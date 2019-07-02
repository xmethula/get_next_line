/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 07:41:27 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/24 11:48:16 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]) && (i < n))
		i++;
	if (i == n)
		i = i - 1;
	if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
		return (1);
	else if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
		return (-1);
	else
		return (0);
}
