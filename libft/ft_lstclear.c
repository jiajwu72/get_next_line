/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 20:13:56 by jwu               #+#    #+#             */
/*   Updated: 2017/11/17 20:14:01 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **begin_list)
{
	t_list *l;
	t_list *tmp;

	l = *begin_list;
	while (l)
	{
		tmp = l->next;
		free(l);
		l = tmp;
	}
	*begin_list = NULL;
}
