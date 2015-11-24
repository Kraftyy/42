/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:01:31 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/24 12:14:00 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*td;
	unsigned char	*ts;
	unsigned char	*tmp;
	size_t			i;

	td = (unsigned char*)dst;
	ts = (unsigned char*)src;
	i = 0;
	if (!(tmp = malloc(sizeof(unsigned char) * len)))
		return (NULL);
	while (i < len)
	{
		tmp[i] = ts[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		td[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dst);
}
