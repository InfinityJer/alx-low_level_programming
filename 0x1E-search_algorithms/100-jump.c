#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump Search Algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (array[end] < value && end < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)(start), (int)array[start]);
		if (array[end] == value)
			return (end);
		start = end;
		end += sqrt(size);
	}
	printf("Value checked array[%d] = [%d]\n", (int)(start), (int)array[start]);
	printf("Value found between indexes [%d] and [%d]\n", (int)start, (int)end);

	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, (int)array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
