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
		ft_putendl("Retgnl");
		ft_putnbr(retgnl);
		ft_putchar('\n');
		ft_putendl(line);
	fd = close(fd);
	return (0);	
}
