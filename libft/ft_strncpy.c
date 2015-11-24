/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:24:26 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/24 14:03:03 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;
	char		*tmp;

	i = 0;
	if (!(tmp = malloc(sizeof(char) * ft_strlen(src))))
		return (NULL);
	while (i < n)
	{
		if (n >= ft_strlen(src))
			tmp[i] = src[i];
		else
			tmp[i] = '\0';
		i++;
	}
	i = 0;
	while (i < n)
	{
		dst[i] = tmp[i];
		i++;
	}
	return (dst);
}
