/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:42:24 by jwu               #+#    #+#             */
/*   Updated: 2017/11/14 15:44:53 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*src1;
	const char	*src2;

	src1 = s1;
	src2 = s2;
	i = 0;
	while (i < n)
	{
		if (src1[i] != src2[i])
			return ((unsigned char)src1[i] - (unsigned char)src2[i]);
		i++;
	}
	return (0);
}
