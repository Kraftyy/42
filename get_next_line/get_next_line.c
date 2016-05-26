/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:40:58 by ndelmatt          #+#    #+#             */
/*   Updated: 2016/05/26 12:09:00 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

static t_out		*check_fd(int const fd, t_list **headptr)
{
	t_list			*it;
	t_list			*node;
	t_out			contentnew;

	it = *headptr;
	while (it)
	{
		if (CONTENT(it)->fdout == fd)
			return (CONTENT(it));
		it = it->next;
	}
	contentnew.fdout = fd;
	contentnew.buff = ft_strnew(BUFF_SIZE);
	if (!(node = ft_lstnew(&contentnew, sizeof(t_out))))
	{
		free(contentnew.buff);
		return (NULL);
	}
	ft_lstadd(headptr, node);
	return (CONTENT(node));
}

static int			fetch_buff(t_out *out, char **line)
{
	char			*tmp;
	char			*cursor;

	if (!*(out->buff))
		return (0);
	if (!(cursor = ft_strchr(out->buff, '\n')))
		cursor = out->buff + BUFF_SIZE;
	*cursor = 0;
	tmp = *line;
	if (!(*line = ft_strjoin(tmp, out->buff)))
		return (-1);
	free(tmp);
	ft_strcpy(out->buff, cursor + 1);
	if (out->buff + BUFF_SIZE == cursor)
		return (0);
	return (1);
}

static int			read_fd(int const fd, char **line, t_out *out)
{
	int				ret;

	while ((ret = read(fd, out->buff, BUFF_SIZE)) > 0)
	{
		(out->buff)[ret] = 0;
		ret = fetch_buff(out, line);
		if (ret)
			break ;
	}
	return (ret);
}

int					get_next_line(int const fd, char **line)
{
	static t_list	*head = NULL;
	t_out			*out;
	int				ret;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	*line = 0;
	if (!(out = check_fd(fd, &head)))
		return (-1);
	if ((ret = fetch_buff(out, line)))
		return (ret);
	ret = read_fd(fd, line, out);
	return (ret);
}

int					main(int ac, char **av)
{
	int				fd;
	char			*line;
	int				retgnl;
	int				i;

	fd = open(av[1], O_RDONLY);
	i = 0;
	while ((retgnl = get_next_line(fd, &line)) > 0)
	{
	ft_putnbr(retgnl);
	ft_putchar('\n');
		i++;
		ft_putendl(line);
	}
	ft_putstr("AF WHILE\n");
	ft_putnbr(retgnl);
	ft_putchar('\n');
	fd = close(fd);
	return (0);
}
