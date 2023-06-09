#include "main.h"

/**
 * _pow_recursion - calculates the result of raising x to the power of y
 * @x: base value
 * @y: exponent value
 *
 * Return: result of the power calculation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
