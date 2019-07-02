/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:51:28 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/12 14:56:37 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n > 9)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if ((n >= 0) && (n <= 9))
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}
