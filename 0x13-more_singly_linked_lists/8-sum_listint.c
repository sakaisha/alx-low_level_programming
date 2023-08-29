#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data in a listint_t linked list.
 * @head: The first node in the linked list.
 *
 * Return: The resulting sum.
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		total_sum += current_node->n;
		current_node = current_node->next;
	}

	return (total_sum);
}
