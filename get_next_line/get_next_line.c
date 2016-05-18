/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:40:58 by ndelmatt          #+#    #+#             */
/*   Updated: 2016/05/18 14:20:59 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

static t_list		checkfd(int const fd, t_list **headptr)
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
int					get_next_line(int const fd, char **line)
{
	static t_list	*head = NULL;	
	t_out			*out;
	char			buff[BUFF_SIZE + 1];
	int				ret;
	char			*cursor;
	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	*line = 0;
	ret = read(fd, buff, BUFF_SIZE);
	buff[BUFF_SIZE]  = '\0';
	cursor = ft_strchr(buff, '\n');
	printf("buff: %d\t%s\n", ret, buff);
	printf("afterbn: %s\n", cursor);
//	if (ret != 0)
//		add_line(buff);
	return (ret);
}

int					main(int ac, char **av)
{
	int				fd;
	char			*line;
	int				retgnl;

	fd = open(av[1], O_RDONLY);
	while ((retgnl = get_next_line(fd, &line)) > 0)
	   printf("retgnl: %d\tline: %s\n", retgnl, line);	
	fd = close(fd);
	return (0);
}
