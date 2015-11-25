/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:06:45 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/25 15:30:01 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	y;

	if (!*s2)
		return ((char *)s1);
	i = 0;
	while (s1[i] && n > 0)
	{
		y = 0;
		while (s1[i] == s2[y] && (s2 != '\0' || s1 != '\0'))
		{
			y++;
			i++;
			n--;
		}
		if (s2[y] == '\0')
			return ((char *)s1 + (i - y));
		i++;
		n--;
	}
	return (NULL);
}
