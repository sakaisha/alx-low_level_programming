#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table
 * @size: Size of the array
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtb = NULL;
	unsigned long int i = 0;

	hashtb = malloc(sizeof(hash_table_t));
	if (!hashtb)
		return (NULL);
	hashtb->array = malloc(sizeof(hash_node_t *) * size);
	if (!(hashtb->array))
	{
		free(hashtb);
		return (NULL);
	}
	for (; i < size; i++)
		hashtb->array[i] = NULL;
	hashtb->size = size;
	return (hashtb);
}
