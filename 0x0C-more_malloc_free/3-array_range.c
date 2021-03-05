#include "holberton.h"

/**
 * array_range - Creates an array of integers.
 *
 * @min: Minimum number.
 * @max: Maximum number.
 *
 * Return: If @min > @max, return (0).
 *         If fails, return (0).
 *         Else, returns the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, j;

	if (min > max)
		return (0);

	ar = (int *) malloc(sizeof(int) * (max - min + 1));

	if (ar == 0)
		return (0);

	for (i = min, j = 0; i <= max; i++, j++)
	{
		ar[j] = i;
	}

	return (ar);
}
