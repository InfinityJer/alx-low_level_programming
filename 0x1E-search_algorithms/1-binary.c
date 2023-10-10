#include "search_algos.h"

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
    int left, right, mid;

    if (array == NULL)
        return (-1);

    left = 0;
    right = size - 1;

    while (left <= right)
    {
        printf("Searching in array: ");
        for (int i = left; i <= right; i++)
        {
            if (i == right)
                printf("%d", array[i]);
            else
                printf("%d, ", array[i]);
        }
        printf("\n");

        mid = (left + right) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1); /* Value not found */
}
