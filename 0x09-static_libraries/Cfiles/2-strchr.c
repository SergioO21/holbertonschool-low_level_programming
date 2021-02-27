#include "holberton.h"

/**
 * _strchr - Locates a character in a string.
 *
 * @s: String.
 * @c: Character to compare.
 *
 * Return: A pointer to the first occurrence of the
 *         character @c in the string @s,
 *         or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			break;

		s++;
	}

	if (*s == c)
		return (s);

	return (0);
}
