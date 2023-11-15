#include "operations.h"

/**
 * divid - Divides two numbers.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The result of the division.
 */

size_t divid(size_t a, size_t b)
{
	size_t result = 0;

	if (b == 0)
		return (0);
	result = a / b;
	return (result);
}
