/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:59:44 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/12/17 11:53:15 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_blank(char const *s)
{
	int				i;
	int				y;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}
	y = ft_strlen(s) - 1;
	if (i > y)
		return (0);
	while ((s[y] == ' ' || s[y] == '\t' || s[y] == '\n') && y > 0)
	{
		i++;
		y--;
	}
	return (ft_strlen(s) - i);
}

char				*ft_strtrim(char const *s)
{
	char			*mem;
	int				i;
	int				y;

	if (!(mem = (char *)malloc(sizeof(char) * ft_blank(s) + 1)))
		return (NULL);
	y = ft_blank(s);
	while ((*s == ' ' || *s == '\n' || *s == '\t'))
		s++;
	i = 0;
	ft_putnbr(y);
	while (y > 0)
	{
		mem[i] = *s;
		i++;
		s++;
		y--;
	}
	mem[i] = '\0';
	return (mem);
}
