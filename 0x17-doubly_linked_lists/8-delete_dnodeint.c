#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a specified index.
 * @head: Head of the list
 * @index: Index where the node will be deleted
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = NULL;
	dlistint_t *c = NULL;
	dlistint_t *n = *head;
	unsigned int i = 0;

	while (n)
	{
		p = c;
		c = n;
		n = n->next;
		if (i == index)
		{
			if (index != 0)
				p->next = n;
			if (n)
				n->prev = p;
			if (index == 0)
				*head = n;
			free(c);
			return (1);
		}
		i++;
	}
	return (-1);
}
