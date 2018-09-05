/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 18:39:01 by jwu               #+#    #+#             */
/*   Updated: 2017/11/17 18:39:02 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreverse(char *s)
{
	size_t i;
	size_t j;
	size_t tmp;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		tmp = s[i];
		s[i++] = s[j];
		s[j--] = tmp;
	}
	return (s);
}
