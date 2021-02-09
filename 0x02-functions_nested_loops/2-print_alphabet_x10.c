#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet character for character (x10)
 */

void print_alphabet_x10(void)
{
	char i, a;

	for (a = 0; a < 10; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
