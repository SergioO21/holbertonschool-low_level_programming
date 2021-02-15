#include "holberton.h"

/**
 *
 *
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
