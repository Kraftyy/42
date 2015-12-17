/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:03:25 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/12/17 10:50:06 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*cpy;

	if (!(cpy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	cpy = ft_strcpy(cpy, s1);
	cpy[ft_strlen(s1)] = 0;
	return (cpy);
}
