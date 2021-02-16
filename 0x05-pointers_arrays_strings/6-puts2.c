#include "holberton.h"

/**
 * puts2 - print odd values
 * @str: String pointer
 *
 */

void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		c++;
	}
	_putchar('\n');
}
