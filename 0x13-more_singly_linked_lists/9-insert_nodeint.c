#include "lists.h"

/**
 * insert_nodeint_at_index - Adds a new node to a linked list at a given index.
 * @head: A pointer to the first node in the list.
 * @idx: The index where the new node will be inserted.
 * @n: The data to be inserted in the new node.
 *
 * Return: A pointer to the new node, or NULL if unsuccessful.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *current = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; current && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		else
			current = current->next;
	}

	return (NULL);
}
