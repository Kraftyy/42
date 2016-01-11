/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:27:07 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/12/17 11:14:41 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_countstr(char const *s, char c)
{
	size_t			count;
	size_t			i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			i++;
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static char			*ft_word(size_t size, char const *s)
{
	char			*res;

	res = ft_strnew(size);
	res = ft_strncpy(res, s, size - 1);
	return (res);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t			count;
	size_t			i;
	char			**mem;

	if (!(mem = (char **)malloc(sizeof(char *) * (ft_countstr(s, c) + 1))))
		return (NULL);
	mem[0] = 0;
	if (ft_countstr(s, c) == 0)
		return (mem);
	i = 0;
	while (i <= ft_countstr(s, c))
	{
		while (*s == c)
			s++;
		count = 0;
		if (*s != c)
		{
			count = ft_strlenc(s, c);
			mem[i] = ft_word(count + 1, s);
			s += count;
		}
		i++;
	}
	mem[i] = 0;
	return (mem);
}
