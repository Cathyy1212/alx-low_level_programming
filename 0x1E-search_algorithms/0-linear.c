#include "search_algos.h"

/**
 * linear_search -  A function that searches for a value in an array of
 * .....integers using the Linear search algorithm
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        if (array[i] == value)
            return (int)i;
    }

    return -1; // Value not found
}
