/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:22:31 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/23 15:54:57 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memset(void *b, int c, size_t len)
{
	int		count;

	count = 0;
	while (count < len)
	{	
		((unsigned char )b[count]) = (unsigned char)c;
		count++;
	}
	return b;
}
