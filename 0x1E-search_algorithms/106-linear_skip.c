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
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%d] = [%d]\n",
					(int) jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%d] and [%d]\n",
			(int) node->index, (int) jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%d] = [%d]\n", (int) node->index, node->n);
	printf("Value checked at index [%d] = [%d]\n", (int) node->index, node->n);

	return (node->n == value ? node : NULL);
}
