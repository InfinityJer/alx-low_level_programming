#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located, or NULL if not found.
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express, *prev;

	if (!list)
		return (NULL);

	express = list->express;
	prev = list;

	printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);

	while (express && express->n < value)
	{
		prev = express;
		express = express->express;
		if (!express)
			break;
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, express ? express->index : prev->index);

	express = prev;

	while (express && express->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		if (express->n == value)
			return (express);
		express = express->next;
	}

	return (NULL);
}
