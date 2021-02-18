#include "holberton.h"

/**
 * _strncat - Concatenates two strings,
 *            it will use at most @n bytes from @src.
 *
 * @src: Source
 * @dest: Destiny
 * @n: Numbers of bytes from @src
 *
 * Return: Concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];

		if (src[j] == '\0')
			break;
	}

	return (dest);
}
