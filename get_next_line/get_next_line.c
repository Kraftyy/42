/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:40:58 by ndelmatt          #+#    #+#             */
/*   Updated: 2016/01/12 14:12:47 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void				add_line(t_list *buff)
{

}

int					get_next_line(int const fd, char **line)
{
	int				ret;
	static t_list	*buff;	

	if (fd < 0 || !line || BUF_SIZE < 1)
		return (-1);
	ret = read(fd, buff, BUFF_SIZE);
	if (ret != 0)
		add_line(buff);
	return (ret);
}
