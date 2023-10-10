#include "search_algos.h"

/**
  * print_array - print array with limits in low and high
  * @array: set of numbers
  * @low: lower bound limit of array
  * @high: upper bound limit of array
  */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
* recursive_search_binary - Searches recursively for a value in a sorted
*                           array of integers using binary search.
* @array: A pointer to the first element of the sub-array to search.
* @low: The starting index of the sub-array to search.
* @high: The ending index of the sub-array to search.
* @value: The value to search for.
*
* Return: If the value is not present, -1.
*         Otherwise, the index where the value is located.
*
* Description: Prints the sub-array being searched after each change
*/
int recursive_search_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		print_array(array, low, high);

		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}

/**
* exponential_search - Searches for a value in a sorted array
*						of integers using exponential search
* @array: A pointer to the first element of the array to search
* @size: The number of elements in the array
* @value: The value to search for.
*
* Return: If the value is not present or the array is NULL, -1.
*         Otherwise, the index where the value is located.
* Description: Prints a value every time it is compared in the array.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, high;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%d] = [%d]\n", (int) i, array[i]);
	}

	high = i < size ? i : size - 1;
	printf("Value found between indexes [%d] and [%d]\n", (int)i / 2, (int) high);
	return (recursive_search_binary(array, i / 2, high, value));
}
