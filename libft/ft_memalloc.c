/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:50:18 by jwu               #+#    #+#             */
/*   Updated: 2017/11/14 22:13:28 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*s;
	size_t	i;

	i = 0;
	s = (char *)malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
