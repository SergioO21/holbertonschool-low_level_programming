#include "holberton.h"

/**
 * _memcpy - Copies memory area.
 *
 * @dest: Array to fill.
 * @src: Source.
 * @n: Number of bytes to copy.
 *
 * Return: Full array @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
