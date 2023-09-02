#include "main.h"

/**
 * count_bits_to_change - calculates the number of bits to change
 * in order to transform one number into another
 * @n: the first number
 * @m: the second number
 *
 * Return: the count of bits to change
 */
unsigned int count_bits_to_change(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
