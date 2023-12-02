#include "hash_tables.h"

/**
 * key_index - Return index of key in hash table.
 *
 * @key: Key to find index for.
 * @size: Size of the hash array.
 * Return: Index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
