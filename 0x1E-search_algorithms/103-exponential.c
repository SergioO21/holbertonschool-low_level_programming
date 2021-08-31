#include "search_algos.h"

int binary_search_lh(int *array, int value, int low, int high);

/**
 * exponential_search - Searches for a value in a sorted array of
 *                      integers using the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: - The index where value is located.
 *         - If @value is not present in array or
 *           if array is NULL, returns (-1).
 */

int exponential_search(int *array, size_t size, int value)
{
	int i, final, status = 0;

	if (!array)
		return (-1);

	for (i = 1; i < (int)size && array[i] <= value; i *= 2)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

	if (i >= (int)size)
		final = size - 1;
	else
		final = i;

	printf("Value found between indexes [%d] and [%d]\n", i / 2, final);

	status = binary_search_lh(array, value, i / 2, final);

	return (status);
}

/**
 * binary_search_lh - Searches for a value in a sorted array of
 *                    integers using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @value: The value to search for.
 * @low: Lowest index.
 * @high: Highest index.
 *
 * Return: - The index where value is located.
 *         - If @value is not present in array or
 *           if array is NULL, returns (-1).
 */

int binary_search_lh(int *array, int value, int low, int high)
{
	int mid, i;

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
