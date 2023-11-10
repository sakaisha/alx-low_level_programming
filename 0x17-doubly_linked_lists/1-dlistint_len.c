#include "lists.h"

/**
 * dlistint_len - Calculates the length of a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: Number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *p;

	for (p = h; p != NULL; p = p->next)
	{
		i++;
	}
	return (i);
}
