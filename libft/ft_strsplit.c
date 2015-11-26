/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:27:07 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/26 19:17:36 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countstr(char const *s, char c)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{	
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		i++;
	}
	return (count);
}	

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int 	y;
	char	**mem;

	if (!(mem = (char *)malloc(sizeof(char) * ft_countchar(s, c) + 1)))
		return (NULL);
	i = 0;
	y = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			mem[y] = s[i];
			y++;
		}
		i++;
	}
	mem[y] = '\0';
	return (mem);
}
