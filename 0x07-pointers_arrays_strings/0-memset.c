#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Array to fill.
 * @b: Constant byte.
 * @n: Bytes of the memory area.
 *
 * Return: Full Array @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
