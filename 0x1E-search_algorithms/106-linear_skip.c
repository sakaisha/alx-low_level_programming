#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_s - Entry point
 * Description: searches for a value in an array of integers
 * using the Linear search algo
 * @run : head of list
 * @value: value for searching
 * @position: position of index
 * Return: postion of value or -1 if not found
 */

skiplist_t *linear_s(skiplist_t *run, int value, int position)
{
	for (; run; run = run->next, position++)
	{
		printf("Value checked array[%i] = [%i]\n",
		       position, run->n);
		if (run->n == value)
			return (run);
	}
	return (NULL);
}

/**
 * linear_skip - search node by jump algo
 * @list: linked list
 * @value: value for searching
 *
 * Return: pointer to first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *run, *prev;
	int step = 0, i = 0;

	if (!list)
		return (NULL);
	for (prev = list, run = list; prev->express->n != run->n;
	     run = run->next)
