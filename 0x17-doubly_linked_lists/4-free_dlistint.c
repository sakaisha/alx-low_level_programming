#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;

	while (head)
	{
		head = curr->next;
		free(curr);
		curr = head;
	}
}
