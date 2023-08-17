#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of a variable number of integers.
 * @n: The number of integers to sum up.
 * @...: A variable number of integers to calculate the sum of.
 *
 * Return: If n is 0, returns 0.
 *         Otherwise, returns the sum of the given integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i, sum = 0;

	va_start(args_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args_list, int);

	va_end(args_list);

	return (sum);
}
