/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:48:48 by ndelmatt          #+#    #+#             */
/*   Updated: 2016/01/12 14:28:04 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H

# include "libft/includes/libft.h"
# define BUFF_SIZE		32
# define CONTENT(x)		((t_out *)(x)->content)

int					get_next_line(int const fd, char **line);

typedef struct		s_out
{
	int				fd;
	char			*buff;
}					t_out

#endif
