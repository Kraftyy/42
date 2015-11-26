/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:41:39 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/26 15:48:51 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	int		i;

	if (!(mem = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (start)
	{
		s++;
		start--;
	}
	i = 0;
	while (len)
	{
		mem[i] = *s;
		s++;
		i++;
		len--;
	}
	return (mem);
}
