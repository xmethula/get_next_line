/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 07:39:41 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/24 11:02:33 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
		return (1);
	else if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
		return (-1);
	else
		return (0);
}
