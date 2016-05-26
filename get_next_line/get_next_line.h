/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:48:48 by ndelmatt          #+#    #+#             */
/*   Updated: 2016/05/26 12:08:10 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H

# include "libft/includes/libft.h"
# define BUFF_SIZE		10000
# define CONTENT(x)		((t_out *)(x)->content)

int					get_next_line(int const fd, char **line);

typedef struct		s_out
{
	int				fdout;
	char			*buff;
}					t_out;

#endif
