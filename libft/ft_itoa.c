/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 20:03:37 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/11/30 21:35:06 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_size(int n)
{
	int	i;

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

char	*ft_itoa(int n)
{
	char	*mem;
	int		i;

	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	i = ft_size(n) + 1;
	if (!(mem = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	mem[i] = '\0';
	i--;
	if (n < 0)
	{
		n = -(n);
		mem[0] = '-';
	}
	while (n != 0)
	{
		mem[i - 1] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (mem);
}
