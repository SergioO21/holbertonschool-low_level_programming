#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: - First index where value is located.
 *         - If @value is not present in array or
 *           if array is NULL, returns (-1).
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	long long pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));

		if (pos >= (int)size || pos < 0)
		{
			printf("Value checked array[%lld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%lld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		else if (array[pos] > value)
			high = pos - 1;

		else
			low = pos + 1;
	}
	return (-1);
}
