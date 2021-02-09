#include "holberton.h"

/**
 * print_alphabet - Print alphabet character for character
 */

void print_alphabet(void)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 27; i++)
	{
		_putchar(alphabet[i]);
	}

	_putchar('\n');
}
