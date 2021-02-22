#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: First string. 
 * @accept: Second String.
 *
 * Return: Counter.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int a = 0, b = 0, c = 0;

	while (accept[a] != '\0')
		a++;

	while (s[b] != '\0')
		b++;

	for (i = 0; i <= a; i++)
	{
		if (c == b)
			break;

		if (accept[i] != s[c])
			c++;
	}
	return (c);
}
