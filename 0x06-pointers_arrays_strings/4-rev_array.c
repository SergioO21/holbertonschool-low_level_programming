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
	int i;
	int x, y;

	for (i = 0; i <= n; i++)
	{
		n--;

		x = a[i];
		y = a[n];

		a[i] = y;
		a[n] = x;
	}
}
