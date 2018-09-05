/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:40:54 by jwu               #+#    #+#             */
/*   Updated: 2017/11/14 15:27:23 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t len)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (dst < src)
		ft_memcpy(s1, s2, len);
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			*((unsigned char *)dst + i) = *((unsigned char *)s2 + i);
		}
	}
	return (dst);
}
