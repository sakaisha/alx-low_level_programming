#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of node values in the list
 * @head: Head of the list
 * Return: Sum of node values.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
