#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of
 *               integers using the Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: - The index where value is located.
 *         - If @value is not present in array or
 *           if array is NULL, returns (-1).
 */

int jump_search(int *array, size_t size, int value)
{
	int jump, low, tmp;

	if (!array)
		return (-1);

	jump = sqrt(size);
	low = tmp = 0;

	while (low <= (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);

		if (array[low + jump] && array[low + jump] < value)
			low += jump;

		else
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", low, low + jump);

	for (tmp = low; tmp <= low + jump; tmp++)
	{
		if (tmp < (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", tmp, array[tmp]);

			if (array[tmp] == value)
				return (tmp);
		}
	}
	return (-1);
}
