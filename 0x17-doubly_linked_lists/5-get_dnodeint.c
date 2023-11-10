#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves a node at a specified index
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the desired node in the list
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	while (curr)
	{
		if (i == index)
			return (curr);
		curr = curr->next;
		i++;
	}
	return (NULL);
}
