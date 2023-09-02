#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
	}
	if (!flag)
		_putchar('0');
}
