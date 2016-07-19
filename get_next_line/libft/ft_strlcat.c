/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:35:56 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/12/17 11:16:11 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sizemax;
	size_t	res;
	size_t	i;

	sizemax = size - ft_strlen(dst) - 1;
	res = ft_strlen(src);
	i = 0;
	while (dst[i] && i < size)
		i++;
	res += ((size > i) ? i : size);
	if ((int)sizemax > 0)
		ft_strncat(dst, src, sizemax);
	return (res);
}
