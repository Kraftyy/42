/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 22:41:38 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/12/17 12:11:33 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*lstnew;
	t_list	*tmp;
	t_list	*e;

	e = f(lst);
	if ((lstnew = ft_lstnew(e->content, e->content_size)))
	{
		tmp = lstnew;
		lst = lst->next;
		while (lst)
		{
			e = f(lst);
			if (!(tmp->next = ft_lstnew(e->content, e->content_size)))
				return (NULL);
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	return (lstnew);
}
