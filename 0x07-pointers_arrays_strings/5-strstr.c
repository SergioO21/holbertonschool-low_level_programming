#include "holberton.h"

/**
 * _strstr - Finds the first occurrence of the
 *           substring @needle in the string @haystack.
 *           The terminating null bytes (\0) are not compared.
 *
 * @haystack: Substring.
 * @needle: String.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *c;

	while (*haystack)
	{
		c = haystack;
		a = needle;

		while (*a == *haystack && *a)
		{
			haystack++, a++;
		}

		if (*a == '\0')
			return (c);

		haystack = c + 1;
	}
	return (0);
}
