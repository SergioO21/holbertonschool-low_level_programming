#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: String pointer
 *
 */

void print_rev(char *s)
{
	int c = 0, i;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	for (i = 0; i <= c; i++)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
