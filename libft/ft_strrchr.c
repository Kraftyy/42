/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:03:24 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/25 14:20:52 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*d;

	i = ft_strlen(s) + 1;
	d = s;
	while (*s)
		s++;
	s++;
	while (i > 0)
	{
		if (d[i] == (char)c)
			return ((char *)s);
		s--;
		i--;
	}
	if (d[i] == (char)c)
		return ((char *)s);
	return (NULL);
}
