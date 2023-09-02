#include "main.h"

/**
 * updateBit - Changes the value of a bit at a specified position to 1.
 * @num: Pointer to the number to be modified.
 * @position: Position of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure.
 */
int updateBit(unsigned long int *num, unsigned int position)
{
	if (position > 63)
		return (-1);

	*num = ((1UL << position) | *num);
	return (1);

}
