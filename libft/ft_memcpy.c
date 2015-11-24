/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:08:56 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/23 16:15:00 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t		count;

	count = 0;
	while (count < n)
	{
		dst[count] = src[count];
		count++;
	}
	return (dst);
}
