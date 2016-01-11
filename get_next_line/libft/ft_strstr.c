/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:33:53 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/30 15:31:51 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		y;

	if (!*s2)
		return ((char *)s1);
	i = 0;
	while (s1[i])
	{
		y = 0;
		while (s1[i + y] == s2[y] && (s2[y] || s1[i + y]))
		{
			y++;
		}
		if (s2[y] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
