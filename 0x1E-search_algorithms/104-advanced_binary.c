#include "search_algos.h"

int advanced_binary_execution(int *array, int low, int high, int value);

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: - The index where value is located.
 *         - If @value is not present in array or
 *           if array is NULL, returns (-1).
 */

int advanced_binary(int *array, size_t size, int value)
{
    int status = -1;

    status = advanced_binary_execution(array, 0, size - 1, value);

    return (status);
}

int advanced_binary_execution(int *array, int low, int high, int value)
{
    int mid, i;

	if (array && low <= high)
	{
        printf("Searching in array: ");
        for (i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i != high)
                printf(", ");
            else
                printf("\n");
        }

        mid = (low + high) / 2;

        if (array[mid] == value)
        {
            if (mid - 1 > 0 && array[mid - 1] == value)
                return (advanced_binary_execution(array, low, mid, value));
            return (mid);
        }

        else if (array[mid] > value)
            return (advanced_binary_execution(array, low, mid - 1, value));

        else
            return (advanced_binary_execution(array, mid + 1, high, value));
    }
    return (-1);
}
