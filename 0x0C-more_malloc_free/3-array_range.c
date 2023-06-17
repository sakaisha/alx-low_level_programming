#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Generates an array of integers within a specified range
 * @min: The minimum value of the range
 * @max: The maximum value of the range
 *
 * Return: A pointer to the newly created integer ary
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
