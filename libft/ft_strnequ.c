/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:30:08 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/12/17 12:00:01 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((*s1 == '\0' && *s2 == '\0') || n == 0)
		return (1);
	if (*s1 != *s2)
		return (0);
	else
		return (ft_strnequ((s1 + 1), (s2 + 1), (n - 1)));
}
