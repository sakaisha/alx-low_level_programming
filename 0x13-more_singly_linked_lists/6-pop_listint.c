#include "lists.h"

/**
 * pop_listint - Removes the head node of a linked list.
 * @head: Pointer to the first element in the linked list.
 *
 * Return: The value stored in the removed element,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (!head || !*head)
		return (0);

	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (value);
}
