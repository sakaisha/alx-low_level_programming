#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * open_files - Opens source and destination files.
 * @file_from: Source file name.
 * @file_to: Destination file name.
 *
 * Return: Array of file descriptors [source, destination].
 */
int *open_files(char *file_from, char *file_to)
{
	int *fd = malloc(2 * sizeof(int));

	fd[0] = open(file_from, O_RDONLY);
	if (fd[0] < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd[1] = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd[1] < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(fd[0]);
		exit(99);
	}
	return (fd);
}

/**
 * copy_content - Copies content from source to destination.
 * @fd_from: Source file descriptor.
 * @fd_to: Destination file descriptor.
 *
 * Return: 0 on success, 98 on read error, 99 on write error.
 */
int copy_content(int fd_from, int fd_to)
{
	ssize_t n;
	char buf[BUF_SIZE];

	while ((n = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buf, n) != n)
		{
			dprintf(2, "Error: Can't write to fd %d\n", fd_to);
			return (99);
		}
	}
	if (n < 0)
	{
		dprintf(2, "Error: Can't read from fd %d\n", fd_from);
		return (98);
	}
	return (0);
}

/**
 * close_files - Closes file descriptors.
 * @fd_from: Source file descriptor.
 * @fd_to: Destination file descriptor.
 *
 * Return: 0 on success, 100 on close error.
 */
int close_files(int fd_from, int fd_to)
{
	if (close(fd_from) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		return (100);
	}
	return (0);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 97 for incorrect arguments, 98 for read error,
 *         99 for write error, or 100 for close error.
 */
int main(int argc, char *argv[])
{
	int res;
	int *fd;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open_files(argv[1], argv[2]);
	res = copy_content(fd[0], fd[1]);
	if (res != 0)
	{
		close_files(fd[0], fd[1]);
		exit(res);
	}
	res = close_files(fd[0], fd[1]);
	free(fd);
	return (res);
}
