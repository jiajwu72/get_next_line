/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 10:59:23 by jwu               #+#    #+#             */
/*   Updated: 2017/11/08 10:59:25 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*tmp_res;
	t_list	*tmplst;

	if (lst == NULL || f == NULL)
		return (NULL);
	tmplst = f(lst);
	if ((res = ft_lstnew(tmplst->content, tmplst->content_size)))
	{
		tmp_res = res;
		lst = lst->next;
		while (lst != NULL)
		{
			tmplst = (*f)(lst);
			if (!(tmp_res->next = ft_lstnew(tmplst->content,
										tmplst->content_size)))
				return (NULL);
			tmp_res = tmp_res->next;
			lst = lst->next;
		}
	}
	return (res);
}
