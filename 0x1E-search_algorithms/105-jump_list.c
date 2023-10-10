#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *              using the Jump search algorithm.
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 *         or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump = sqrt(size);
    listint_t *current = list, *prev = NULL;

    if (!list)
        return (NULL);

    printf("Value checked at index [0] = [%d]\n", current->n);

    while (current && current->n < value)
    {
        prev = current;
        size_t step = 0;

        while (current->next && step < jump)
        {
            current = current->next;
            step++;
        }

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    while (prev && prev->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

        if (prev->next)
            prev = prev->next;
        else
            return (NULL);
    }

    if (prev && prev->n == value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        return (prev);
    }

    return (NULL);
}

