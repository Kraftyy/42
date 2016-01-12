/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:40:58 by ndelmatt          #+#    #+#             */
/*   Updated: 2016/01/12 14:28:06 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void				add_line(t_list *buff)
{

}

int					get_next_line(int const fd, char **line)
{
	t_list			*head;	
	t_out			buff;
	int				ret;

	if (fd < 0 || !line || BUF_SIZE < 1)
		return (-1);
	ret = read(fd, buff, BUFF_SIZE);
	if (ret != 0)
		add_line(buff);
	return (ret);
}
