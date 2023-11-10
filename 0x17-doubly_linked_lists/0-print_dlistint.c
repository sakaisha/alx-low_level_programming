#include "lists.h"

/**
 * print_dlistint - Prints all elements in a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *p;

	for (p = h; p != NULL; p = p->next)
	{
		printf("%d\n", p->n);
		i++;
	}
	return (i);
}
