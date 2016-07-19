/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:40:58 by ndelmatt          #+#    #+#             */
/*   Updated: 2016/07/19 18:52:22 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		read_fd(const int fd, int *ret, int *end, char **str)
{
	char		buf[BUFF_SIZE + 1];
	char		*tmp;

	if (!*str)
		*str = ft_strdup("");
	if ((ft_strchr(*str, '\n')) == NULL)
	{
		while ((*ret = read(fd, buf, BUFF_SIZE)) > 0)
		{
			*end = 0;
			buf[*ret] = '\0';
			tmp = ft_strjoin(*str, buf);
			free(*str);
			*str = tmp;
			if (ft_strchr(buf, '\n') != NULL)
				break ;
		}
		if (*ret == 0)
			*end = 1;
		if (*ret < 0)
			return (1);
	}
	return (0);
}

static int		ret_gnl(int *end, char **str, char **line)
{
	char		*tmp;

	if (*str[0] && *str[0] == '\n')
	{
		(*line)[0] = '\0';
		tmp = ft_strdup(*str + 1);
		free(*str);
		*str = tmp;
		return (1);
	}
	if ((ft_strchr(*str, '\n')) != NULL)
	{
		tmp = ft_strdup((ft_strchr(*str, '\n') + 1));
		free(*str);
		*str = tmp;
	}
	if (*end == 1 && *line[0] == '\0')
		return (0);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static	t_out	out = (t_out){0, NULL};
	int				ret;
	int				size;
	int				i;

	if (fd < 0 || line == NULL)
		return (-1);
	if ((read_fd(fd, &ret, &(out.fdout), &(out.buff))) == 1)
		return (-1);
	size = 0;
	i = -1;
	while (out.buff[i++] && out.buff[i] != '\n')
		size++;
	if ((*line = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
		return (-1);
	(*line)[size] = '\0';
	i = -1;
	while (++i < size)
		(*line)[i] = out.buff[i];
	if (out.fdout == 1 && ft_strchr(out.buff, '\n') == NULL)
		out.buff = ft_strdup("");
	return (ret_gnl(&(out.fdout), &(out.buff), line));
}
