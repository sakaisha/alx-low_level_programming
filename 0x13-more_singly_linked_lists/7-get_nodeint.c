#include "lists.h"

/**
 * fetch_nodeint_at_index - Get the node at an index in a linked list.
 * @head: The initial node in the linked list.
 * @index: The target index of the desired node.
 *
 * Return: A pointer to the sought node, or NULL if not found.
 */
listint_t *fetch_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp ? temp : NULL);
}
