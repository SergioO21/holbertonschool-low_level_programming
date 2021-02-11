#include "holberton.h"

/**
 * print_square - Print a square
 * @size: Define size of the square
 *
 */

void print_square(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
