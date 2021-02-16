#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: String pointer
 *
 */

void puts_half(char *str)
{
	int c = 0, d, i;

	while (*str != '\0')
	{
		c++;
		str++;
	}

	d = c / 2;

	for (i = 0; i < d; i++)
		str--;

	for (i = 0; i <= d; i++)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
