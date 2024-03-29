#include "hash_tables.h"

/**
 * hash_table_set - Entry point
 * @key: key :)
 * @ht: hast table.
 * @value: value.
 * Return: index of the key.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *hnode;

	if (!ht || !key || !*key || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		for (hnode = ht->array[idx]; hnode; hnode = hnode->next)
		{
			if (strcmp(hnode->key, key) == 0)
			{
				free(hnode->value);
				hnode->value = strdup(value);
				return (1);
			}
		}
	}
	hnode = malloc(sizeof(hash_node_t));
	if (!hnode)
		return (0);
	hnode->key = strdup(key);
	hnode->value = strdup(value);
	hnode->next = ht->array[idx];
	ht->array[idx] = hnode;
	return (1);
}
