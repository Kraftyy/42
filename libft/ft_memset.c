/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:22:31 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/24 11:08:06 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;
	
	i = 0;
	tmp = (unsigned char*)b;
	while (i < len)
	{	
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
