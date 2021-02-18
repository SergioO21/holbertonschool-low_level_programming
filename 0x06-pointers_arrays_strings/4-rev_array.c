#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: Array
 * @n: Array size
 *
 */

void reverse_array(int *a, int n)
{
	int i, x, j = n - 1;

	for (i = 0; i < j; i++, j--)
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;
	}
}
