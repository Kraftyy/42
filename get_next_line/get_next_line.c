/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:40:58 by ndelmatt          #+#    #+#             */
/*   Updated: 2016/04/27 17:54:18 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

//void				add_line(t_list *buff)

int					get_next_line(int const fd, char **line)
{
//	static t_list	*head;	
	char			buff[BUFF_SIZE];
	int				ret;
	char			*cursor;
	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	*line = 0;
	ret = read(fd, buff, BUFF_SIZE);
	ft_putchar('t');
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
