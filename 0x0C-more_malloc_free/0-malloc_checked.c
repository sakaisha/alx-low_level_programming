#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function for allocating memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: a pointer to the allocated memory block
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
