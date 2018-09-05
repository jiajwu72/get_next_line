/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:43:27 by jwu               #+#    #+#             */
/*   Updated: 2017/12/01 17:54:49 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1000
# include "libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int				get_next_line(int const fd, char **line);
typedef struct	s_gnl
{
	int				fd;
	char			*first;
	char			*rest;
	struct s_gnl	*next;
}				t_gnl;

typedef struct	s_lst
{
	struct s_gnl *first;
}				t_lst;
#endif
