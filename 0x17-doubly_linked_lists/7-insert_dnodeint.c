#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a specified index.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index where the new node will be inserted.
 * @n: Value of the new node.
 * Return: Pointer to the new node, or NULL if the insertion fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p = NULL;
	dlistint_t *c = *h;
	dlistint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	while ((!(*h) && idx == 0) || p || c)
	{
		if (i == idx)
		{
			new_node->next = c;
			new_node->prev = p;
			if (c)
				c->prev = new_node;
			if (idx != 0)
				p->next = new_node;
			if (!p)
				*h = new_node;
			return (new_node);
		}
		p = c;
		if (c)
			c = c->next;
		i++;
	}
	return (NULL);
}
