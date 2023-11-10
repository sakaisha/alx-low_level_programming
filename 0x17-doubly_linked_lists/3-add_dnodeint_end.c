#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value to be stored in the new node.
 * Return: Number of nodes in the list after the addition.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *curr = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	while (*head && curr->next)
	{
		curr = curr->next;
	}
	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		curr->next = new_node;
		new_node->prev = curr;
	}
	return (new_node);
}
