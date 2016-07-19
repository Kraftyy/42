/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:55:41 by ndelmatt          #+#    #+#             */
/*   Updated: 2016/07/19 18:39:03 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	tmp;
	
	tmp = (char)c;
	while (*s != tmp)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char*)(s));
}
