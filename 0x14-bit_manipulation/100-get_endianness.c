#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int test_value = 1;
	char *byte_pointer = (char *)&test_value;

	return (*byte_pointer);
}
