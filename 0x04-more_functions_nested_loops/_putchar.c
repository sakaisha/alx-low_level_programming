#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to be written
 *
 * Returns 1 on success, -1 on failure with errno set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
