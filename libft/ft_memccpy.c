/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:15:18 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/12/17 16:11:46 by ndelmatt         ###   ########.fr       */
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
		td[i] = ts[i];
		if (ts[i] == (unsigned char)c)
		{
			dst++;
			return (dst);
		}
		i++;
		dst++;
	}
	return (NULL);
}
