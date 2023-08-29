#include "lists.h"

/**
 * fetch_nodeint_at_index - Retrieves the node at a given index in a linked list.
 * @head: Initial node in the linked list.
 * @index: Index of the desired node.
 *
 * Return: Pointer to the targeted node, or NULL if not found.
 */
listint_t *fetch_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
