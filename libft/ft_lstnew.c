/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:57:58 by jwu               #+#    #+#             */
/*   Updated: 2017/11/08 10:57:59 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *l;

	l = (t_list *)malloc(sizeof(t_list) * content_size);
	if (l == NULL)
		return (NULL);
	if (content == NULL)
	{
		l->content = NULL;
		l->content_size = 0;
		l->next = NULL;
	}
	else
	{
		l->content = malloc(sizeof(t_list) * content_size);
		if (l->content == NULL)
			return (NULL);
		ft_memcpy(l->content, content, content_size);
		l->content_size = content_size;
		l->next = NULL;
	}
	return (l);
}
