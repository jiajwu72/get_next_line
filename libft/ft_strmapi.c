/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:52:40 by jwu               #+#    #+#             */
/*   Updated: 2017/11/08 10:52:49 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	if (s == NULL)
		return (NULL);
	s2 = ft_strdup(s);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s2[i])
	{
		s2[i] = f(i, s2[i]);
		i++;
	}
	return (s2);
}
