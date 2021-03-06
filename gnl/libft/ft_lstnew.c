/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 22:03:38 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/12/17 11:17:36 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*listnew;

	if (!(listnew = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	listnew->next = NULL;
	if (content == NULL)
	{
		listnew->content = NULL;
		listnew->content_size = 0;
	}
	else
	{
		if (!(listnew->content = (t_list*)malloc(sizeof(content_size))))
			return (NULL);
		ft_memmove(listnew->content, content, content_size);
		listnew->content_size = content_size;
	}
	return (listnew);
}
