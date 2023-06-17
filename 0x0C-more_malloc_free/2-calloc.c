#include <stdlib.h>
#include "main.h"

/**
 * *_memset - populates a memory region with a constant byte
 * @s: the memory area to be populated
 * @b: the character to be copied
 * @n: the number of times the character should be copied
 *
 * Return: a pointer to the populated memory area, s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array and initializes it with zeros
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the memory block allocated for the array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
