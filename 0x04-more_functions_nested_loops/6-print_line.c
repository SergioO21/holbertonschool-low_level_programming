#include "holberton.h"

/**
 * print_line - Print "_" @n times
 * @n: Number of times to print "_"
 *
 */

void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
