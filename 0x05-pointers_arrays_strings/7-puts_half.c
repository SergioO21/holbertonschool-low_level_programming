#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: String pointer
 *
 */

void puts_half(char *str)
{
	int c = 0, d;

	while (str[c] != '\0')
	{
		c++;
	}

	if (c % 2 == 1)
	{
		d = (c - 1) / 2;
		d = c - d;
	}

	else
		d = c / 2;

	while (str[d])
	{
		_putchar(str[d]);
		d++;
	}
	_putchar('\n');
}
