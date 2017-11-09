#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h> 
#include <fcntl.h>


int		main(int ac, char ** av)
{
	if(ac == 1)
		write(2, "File name missing.\n", 19);
	else if(ac > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
	int fd;
	char *buf;
		if(fd = open (av[1], O_RDONLY))
			while (read(fd, &buf, 1) > 0)
				write(1, &buf, 1);
	}
	return (0);
}
