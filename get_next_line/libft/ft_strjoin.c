/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:50:52 by ndelmatt          #+#    #+#             */
/*   Updated: 2016/05/26 11:54:52 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	int		i;
	int		y;

	if (!s1 || !s2)
		return (ft_strdup(((s1) ? s1 : s2)));
	if (!(mem = (char *)malloc(sizeof(char) * (ft_strlen(s1) +
						ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		mem[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
	{
		mem[i] = s2[y];
		i++;
		y++;
	}
	mem[i] = '\0';
	return (mem);
}
