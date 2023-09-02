#include "custom_header.h"

/**
 * custom_set_bit - sets a bit at a given index to 1
 * @number: pointer to the number to change
 * @bit_index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int custom_set_bit(unsigned long int *number, unsigned int bit_index)
{
    if (bit_index > 63)
        return (-1);

    *number = ((1UL << bit_index) | *number);
    return (1);
}
