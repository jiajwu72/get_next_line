/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 18:11:48 by jwu               #+#    #+#             */
/*   Updated: 2017/11/17 18:11:51 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strremove(char *s, size_t i)
{
	size_t	len_s;
	size_t	j;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (i > len_s - 1)
		return (s);
	if (i == len_s - 1)
		s[len_s - 1] = '\0';
	while (i < len_s - 1)
	{
		j = i + 1;
		s[i] = s[j];
		i++;
	}
	s[len_s - 1] = '\0';
	return (s);
}
