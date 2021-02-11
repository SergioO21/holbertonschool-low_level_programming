#include "holberton.h"

/**
 * print_diagonal - Print a diagonal in base to @n
 * @n: Define size of the diagonal
 *
 */

void print_diagonal(int n)
{
	int i, x, y = 1;

	if (n >= 0)
	{
		/* This for loop is for new lines and increase @y */
		for (i = 1; i <= n; i++)
		{
			/* This for loop is for print the diagonal*/
			for (x = 0; x <= y; x++)
			{
				_putchar(' ');

				if (x == y - 1)
					_putchar('\\');
			}
			_putchar('\n');
			y = y + 1;
		}
	}
	_putchar('\n');
}
