#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int	fd;
	char	*line;
	int	retgnl;

	fd = open(av[1], O_RDONLY);
	while ((retgnl = get_next_line(fd, &line)) > 0 )
	printf("%d\n", retgnl);			
	fd = close(fd);
	return (0);	
}
