#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: First pointer
 * @b: Second pointer
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
