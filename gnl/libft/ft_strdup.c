/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:03:25 by ndelmatt          #+#    #+#             */
/*   Updated: 2016/07/19 18:44:38 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strdup(const char *s1)
{
	char	*dst;
	int		i;

	i = 0;
	if (!(dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	else
	{
		while (s1[i])
		{
			dst[i] = s1[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (dst);
}
