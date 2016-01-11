/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 22:20:52 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/30 22:25:45 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memrcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*td;
	unsigned char	*ts;

	td = (unsigned char *)dst;
	ts = (unsigned char *)src;
	while (n > 0)
	{
		*(td + n - 1) = *(ts + n - 1);
		n--;
	}
	return (dst);
}
