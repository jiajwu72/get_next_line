/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 17:31:56 by jwu               #+#    #+#             */
/*   Updated: 2017/12/01 19:00:14 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_gnl				*create_gnl(int fd, int is_first, char *buf)
{
	t_gnl *l;

	l = (t_gnl *)malloc(sizeof(t_gnl));
	l->fd = fd;
	if (is_first == 1)
		l->rest = buf;
	else
	{
		l->rest = ft_endl(buf) == 0 ? ft_strdup("") : ft_strchr(buf, '\n');
		(l->rest)++;
	}
	l->first = ft_firstch(l->rest);
	l->next = NULL;
	return (l);
}

void				read_buf(int fd, t_gnl **stock, int *ret)
{
	char *buf;
	char *tmp;

	buf = ft_strnew(BUFF_SIZE);
	*ret = read(fd, buf, BUFF_SIZE);
	tmp = ft_strnew(1);
	while (*ret > 0)
	{
		buf[*ret] = '\0';
		tmp = ft_strmerge(tmp, buf);
		buf = ft_strnew(BUFF_SIZE);
		*ret = read(fd, buf, BUFF_SIZE);
	}
	free(buf);
	(*stock) = create_gnl(fd, 1, tmp);
}

t_gnl				*add_fd(int fd, t_lst *l, int *ret)
{
	t_gnl *gnl;
	t_gnl *top;

	gnl = l->first;
	while (gnl)
	{
		if (gnl->fd == fd)
		{
			gnl->rest = ft_endl(gnl->rest) == 0 ? ft_strdup("")
			: ft_strchr(gnl->rest, '\n');
			if (*(gnl->rest))
				(gnl->rest)++;
			gnl->first = ft_firstch(gnl->rest);
			return (gnl);
		}
		gnl = gnl->next;
	}
	read_buf(fd, &top, ret);
	top->next = l->first;
	l->first = top;
	return (top);
}

t_lst				*free_gnl(t_lst *l, int fd)
{
	t_gnl *tmp;
	t_gnl *prev;

	prev = (l)->first;
	if (prev->fd == fd)
	{
		(l)->first = prev->next;
		free(prev);
		prev = NULL;
		return (l);
	}
	tmp = prev->next;
	while (tmp)
	{
		if (tmp->fd == fd)
		{
			prev->next = tmp->next;
			free(tmp);
			return (l);
		}
		prev = tmp;
		tmp = tmp->next;
	}
	*(&l) = NULL;
	return (l);
}

int					get_next_line(int const fd, char **line)
{
	static t_lst	*stock;
	int				ret;
	t_gnl			*tmp;

	if (fd < 0 || !line)
		return (-1);
	if (!stock)
	{
		read_buf(fd, &tmp, &ret);
		stock = malloc(sizeof(t_lst));
		stock->first = tmp;
	}
	else
		tmp = add_fd(fd, stock, &ret);
	if (ret == -1)
	{
		free_gnl(stock, fd);
		return (-1);
	}
	*line = tmp->first;
	if (ft_strcmp(tmp->rest, "") == 0)
		free_gnl(stock, fd);
	return ((ft_strcmp(tmp->rest, "") == 0 ? 0 : 1));
}
