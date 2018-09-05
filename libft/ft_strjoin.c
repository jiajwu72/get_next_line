/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:54:08 by jwu               #+#    #+#             */
/*   Updated: 2017/11/08 10:54:09 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_all;
	size_t	i;
	char	*s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	len_all = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (len_all + 1));
	if (s == NULL)
		return (NULL);
	while (*s1)
	{
		s[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		s[i] = *s2;
		i++;
		s2++;
	}
	s[i] = '\0';
	return (s);
}
