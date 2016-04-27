/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 11:15:02 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/12/17 11:15:23 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_strlenc(const char *s, char c)
{
	size_t	size;

	size = 0;
	while (*s != c && *s)
	{
		s++;
		size++;
	}
	return (size);
}
