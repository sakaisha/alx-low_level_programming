#include "lists.h"

/**
 * fetch_nodeint_at_index - Retrieves node at specified index within lin-lists
 * @head: The initial node of the linked list.
 * @index: The index of the desired node.
 *
 * Return: Pointer to the targeted node, or NULL if not found.
 */
listint_t *fetch_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current && count < index)
	{
		current = current->next;
		count++;
	}

	return (current ? current : NULL);
}
