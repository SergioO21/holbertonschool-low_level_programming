#include "holberton.h"

/**
 * array_range - Creates an array of integers.
 *
 * @min: Minimum number.
 * @max: Maximum number.
 *
 * Return: If min > max, return (0).
 *         If fails, return (0).
 *         Else, returns the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, j;

	j = 0;

	if (min > max)
		return (0);

	for (i = min; i <= max; i++)
		j++;

	ar = (int *) malloc(sizeof(int) * (j + 1));

	if (ar == 0)
		return (0);

	for (i = min, j = 0; i <= max; i++, j++)
		ar[j] = i;

	ar[i] = '\0';

	return (ar);
}
