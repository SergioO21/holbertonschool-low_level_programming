#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of
 *                 integers using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: - The index where value is located.
 *         - If @value is not present in array or
 *           if array is NULL, returns (-1).
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, i, low = 0;
	int high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
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
			return (mid);

		else if (array[mid] > value)
			high = mid - 1;

		else
			low = mid + 1;
	}
	return (-1);
}
