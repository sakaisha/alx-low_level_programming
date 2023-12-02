#include "hash_tables.h"

/**
 * hash_djb2 - implements djb2 algorithm
 * @str: input data
 *
 * Return: coded number.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;  // Initialize hash value
	int c;

	hash = 5381;  // Magic number for hash initialization
	while ((c = *str++))  // Loop through each character
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
