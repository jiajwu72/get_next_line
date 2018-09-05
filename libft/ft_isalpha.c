/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:46:54 by jwu               #+#    #+#             */
/*   Updated: 2017/11/14 20:23:46 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		islow(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

static int		isup(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int				ft_isalpha(int c)
{
	if (islow(c) == 1 || isup(c) == 1)
		return (1);
	return (0);
}
