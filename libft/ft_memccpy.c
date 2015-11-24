/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:15:18 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/24 12:15:35 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*td;
	unsigned char	*ts;

	i = 0;
	td = (unsigned char*)dst;
	ts = (unsigned char*)src;
	while (i < n)
	{
		if (ts[i] == (unsigned char)c)
		{
			dst++;
			return (dst);
		}
		td[i] = ts[i];
		i++;
		dst++;
	}
	return (NULL);
}
