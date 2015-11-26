/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:22:48 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/26 13:38:20 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	unsigned char	*mem;
	int				i;

	if (!(mem = malloc(sizeof(unsigned char) * size)))
		return (NULL);
	i = 0;
	while (size > 0)
	{
		mem[i] = 0;
		i++;
		size--;
	}
	return (mem);
}
