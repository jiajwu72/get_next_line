/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:46:05 by jwu               #+#    #+#             */
/*   Updated: 2017/11/14 19:27:41 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && --n)
	{
		if (s1[i] != s2[i])
			return ((unsigned int)(s1[i] - s2[i]));
		i++;
	}
	return ((unsigned int)(s1[i] - s2[i]));
}
