#include "search_algos.h"

/**
 * print_array - Prints an array of integers between low and high indices.
 * @array: A pointer to the array to print.
 * @low: The starting index of the array to print.
 * @high: The ending index of the array to print.
 *
 * Description: This function prints the sub-array being searched after each change.
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
 * Description: Prints the sub-array being searched after each change.
 */
int recursive_search_binary(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    if (high < low)
        return (-1);

    print_array(array, low, high);
    mid = low + (high - low) / 2;
    if (array[mid] == value)
        return (mid);
    if (array[mid] > value)
        return (recursive_search_binary(array, low, mid - 1, value));
    return (recursive_search_binary(array, mid + 1, high, value));
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using Binary Search Algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return (recursive_search_binary(array, 0, size - 1, value));
}
