#include "main.h"

/**
 * factorial - computes the factorial of a given number
 * @n: the number for which the factorial is calculated
 *
 * Return: the factorial of num
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
