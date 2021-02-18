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
	int i, x;

	for (i = 0; i <= n; i++)
	{
		n--;

		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
