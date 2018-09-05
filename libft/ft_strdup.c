/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:42:56 by jwu               #+#    #+#             */
/*   Updated: 2017/11/14 16:22:25 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (s == NULL)
		return (NULL);
	s = ft_strcpy(s, src);
	return (s);
}
