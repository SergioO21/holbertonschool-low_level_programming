#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: String pointer
 *
 */

void puts_half(char *str)
{
	int c = 0, d, i;

	while (str[c] != '\0')
	{
		c++;
	}

	if (c % 2 == 1)
		c = c + 1;

	d = c / 2;

	for (i = d; i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
