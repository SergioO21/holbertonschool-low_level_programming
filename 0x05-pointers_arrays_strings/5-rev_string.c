#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: String pointer
 *
 */

void rev_string(char *s)
{
	    int l = 0;
	    int i;
	    char b, e;

	/* Counts the length of the string */
	while (s[l] != '\0')
	{
		l++;
	}

	l--; /* Skip '\0' */

	for (i = 0; i <= l; i++)
	{
		b = s[i]; /* b --> 0 */
		e = s[l]; /* e --> 9 */

		s[i] = e; /* 0 --> 9 */
		s[l] = b; /* 9 --> 0 */
		l--;
	}
}
