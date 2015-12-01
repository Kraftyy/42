#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*listnew;
	
	if (!(listnew = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	newlist->next = NULL;
	if (content == NULL)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
	}
	else
	{
		if (!(listnew = (t_list*)malloc(sizeof(content_size))))
			return (NULL);
		ft_memmove(listnew->content, content, content_size);
		listnew->content_size = content_size;
	}
	return (listnew);
}
