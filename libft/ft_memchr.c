/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:22:50 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/24 12:33:17 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ts;
	size_t			i;

	ts = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (ts[i] == (unsigned char)c)
			return (ts);
		i++;
		ts++;
	}
	return (NULL);
}
