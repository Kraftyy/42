/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:40:02 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/26 13:50:54 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strnew(size_t size)
{
	char	*mem;

	if (!(mem = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (size)
	{
		mem[size] = '\0';
		size--;
	}
	mem[size] = 0;
	return (mem);
}
