/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 22:41:38 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/12/04 23:11:05 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void (*f) (t_list *elem))
{
	t_list	*lstnew;
	t_list	*tmp;
	t_list	*e;
	
	tmp = f(lst);
	if (lstnew = ft_lstnew(tmp->content, tmp->content_size))
	{
		tmp = lstnew;
		lst = lst->next;
		while (lst)
		{
			tmp = f(lst);
			lst = lst->next;
			if (!(e->next = ft_lstnew(tmp->content, tmp->content_size)))
				return (NULL);
			e = e->next;
		}
	}
	return (lstnew);
}
