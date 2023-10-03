#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

#define BUFF_SIZE 1024

/**
 * main - Entry point of the program.
 * @ac: Number of command-line arguments.
 * @av: Array of command-line arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r, w;
	char buffer[BUFF_SIZE];

	if (ac != 3)
		dprintf(2, "Usage: %s file_from file_to\n", av[0), exit(97);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((r = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
			dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	if (r == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

	if (close(fd_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_from), exit(100);

	if (close(fd_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
