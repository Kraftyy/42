/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndelmatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 14:40:29 by ndelmatt          #+#    #+#             */
/*   Updated: 2015/12/17 14:49:05 by ndelmatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list	*newlst;
	t_list	*lst;

	lst = *alst;
	while (lst)
	{
		newlst = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = newlst;
	}
	*alst = NULL;
}
