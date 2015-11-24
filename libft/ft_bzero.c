/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:55:15 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/23 16:08:40 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_bzero(void *s, size_t n)
{
	size_t		count;

	count = 0;
	if (n == 0)
		return;
	while (count < n)
	{
		s[count] = 0;
		count++;
	}
}
