#include "libft.h"

size_t		ft_strlenc(const char *s, char c)
{
	size_t size;
	
	size = 0;
	while (*s != c && *s)
	{
		s++;
		size++;
	}
	return (size);
}
