/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 15:09:16 by jwu               #+#    #+#             */
/*   Updated: 2017/11/14 19:15:41 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0' || *str2 == '\0')
			return (0);
		str1++;
		str2++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
