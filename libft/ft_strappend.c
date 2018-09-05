/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:59:21 by jwu               #+#    #+#             */
/*   Updated: 2017/11/17 16:59:24 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*strapp_fin(char *s, char c)
{
	size_t	i;

	i = ft_strlen(s);
	s[i] = c;
	s[i + 1] = '\0';
	return (s);
}

char			*ft_strappend(char *s, char c, size_t i)
{
	size_t	len_s;
	size_t	indice;
	size_t	indicem;

	len_s = ft_strlen(s);
	if (len_s < i)
		return (s);
	if (len_s == i)
		return (strapp_fin(s, c));
	indice = len_s;
	while (indice > i && indice > 0)
	{
		indicem = indice - 1;
		s[indice] = s[indicem];
		indice--;
	}
	s[i] = c;
	s[len_s + 1] = '\0';
	return (s);
}
