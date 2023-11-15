#include "100-operations.h"

/**
 * modif - Computes the modulo of two numbers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of the modulo operation.
 */

size_t modif(size_t a, size_t b)
{
	size_t result = 0;

	if (b == 0)
		return (0);
	result = a % b;
	if (a < 0 && b < 0)
		result *= -1;
	return (result);
}
