#include "holberton.h"

/**
 * print_alphabet - Print alphabet character for character
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
