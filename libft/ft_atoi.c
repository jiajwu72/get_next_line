/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:46:23 by jwu               #+#    #+#             */
/*   Updated: 2017/11/14 21:35:26 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		res(int num, int signe)
{
	num = (signe * num);
	if (num == -469762049)
		return (-1);
	else if (num == 469762049)
		return (0);
	else
		return (num);
}

int				ft_atoi(const char *str)
{
	int		num;
	long	i;
	int		signe;

	num = 0;
	i = 0;
	signe = 1;
	while (str[i] && (str[i] == ' ' || str[i] == '\r' || str[i] == '\f'
				|| str[i] == '\t' || str[i] == '\n' || str[i] == '\v'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		signe = str[i] == '-' ? -1 : 1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (res(num, signe));
}
