/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:40:15 by jwu               #+#    #+#             */
/*   Updated: 2017/11/08 10:40:17 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dst);
}
