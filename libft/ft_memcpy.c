/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:08:56 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/24 11:31:45 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*td;
	unsigned char	*ts;
	size_t		i;

	td = (unsigned char *)dst;
	ts = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		td[i] = ts[i];
		i++;
	}
	return (dst);
}
