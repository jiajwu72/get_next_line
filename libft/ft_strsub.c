/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:53:48 by jwu               #+#    #+#             */
/*   Updated: 2017/11/08 10:53:50 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*s2;
	size_t		i;

	if (s == NULL)
		return (NULL);
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s[start] && len--)
	{
		s2[i++] = s[start++];
	}
	s2[i] = '\0';
	return (s2);
}
