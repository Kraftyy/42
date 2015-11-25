/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:33:53 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/25 15:26:23 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		while (s1[i] == s2[y] && (s2 != '\0' || s1 != '\0'))
		{
			y++;
			i++;
		}
		if (s2[y] == '\0')
			return ((char *)s1 + (i - y));
		i++;
	}
	return (NULL);
}
