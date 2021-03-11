#include <stdio.h>

/**
 * int_index - Searches for an integer.
 *
 * @array: Array received as parameter.
 * @size: Array size.
 * @cmp: Calls the function received as a parameter.
 *
 * Return: If fails or no element matches, returns (-1).
 *         Else, returns the position of the matching array.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c;

	if (!array || !cmp || !size)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		c = cmp(array[i]);

		if (c == 1)
			return (i);
	}

	return (-1);
}
