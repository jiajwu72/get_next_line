/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:52:29 by jwu               #+#    #+#             */
/*   Updated: 2017/11/08 10:52:30 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	s2 = ft_strdup(s);
	if (s2 == NULL)
		return (NULL);
	while (s2[i] != 0)
	{
		s2[i] = f(s2[i]);
		i++;
	}
	return (s2);
}
