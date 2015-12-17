/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 20:03:37 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/12/17 11:52:42 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_size(int n)
{
	int			i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char		*mem;
	int			i;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_size(n);
	if (!(mem = ft_strnew(i)))
		return (NULL);
	if (n < 0)
	{
		mem[0] = '-';
		n = -(n);
	}
	while (n != 0)
	{
		mem[i - 1] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (mem);
}
