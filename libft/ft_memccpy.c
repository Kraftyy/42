/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:15:18 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/23 16:27:38 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memccpy(void *dst, const void *src, int c,
				size_t n)
{
	size_t		count;

	count = 0;
	while (count < n)
	{
		if ((unsigned char)src[count] == (unsigned char)c)
		{
			count++;
			return (dst[count]);
		}
		dst[count] = src[count];
		count++;
	}
	return (NULL);
}
