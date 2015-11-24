/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:03:25 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/24 13:17:17 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*tmp;

	if (!(tmp = malloc(sizeof(const char) * ft_strlen(s1))))
		return (NULL);
	tmp = ft_strcpy(tmp, s1);
	return (tmp);
}
