#include "main.h"

/**
 * change_bit - updates the value of a specified bit to 0
 * @n: pointer to the number to be modified
 * @index: index of the bit to change
 *
 * Return: 1 for success, -1 for failure
 */
int change_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
