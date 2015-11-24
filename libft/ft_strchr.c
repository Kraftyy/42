/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:55:41 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/24 19:55:20 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*d;

	i = 0;
	d = s;
	while (d[i])
	{
		if (d[i] == (char)c)
			return ((char *)s);
		s++;
		i++;
	}
	if (d[i] == (char)c)
		return ((char *)s);
	return (NULL);
}
