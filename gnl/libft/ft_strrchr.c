/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:03:24 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/30 17:55:42 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (*s)
		s++;
	while (*s != (char)c && i != 0)
	{
		s--;
		i--;
	}
	if (i == 0)
		return (NULL);
	else
		return ((char *)s);
}
