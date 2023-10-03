#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file with specified content.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len = 0;
	while (text_content[len] != '\0')
		len++;

	w = write(fd, text_content, len);
	close(fd);

	if (w == -1)
		return (-1);

	return (1);
}
