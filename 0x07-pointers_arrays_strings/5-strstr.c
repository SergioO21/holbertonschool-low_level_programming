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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			return (haystack);

		haystack++;
	}
	return (NULL);
}
