#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_difference = n ^ m;
	unsigned int count = 0;

	while (bit_difference > 0)
	{
		count += bit_difference & 1;
		bit_difference >>= 1;
	}

	return count;
}
