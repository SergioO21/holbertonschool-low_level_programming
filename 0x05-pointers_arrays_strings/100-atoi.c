#include "holberton.h"

/**
 * _atoi - Convert a string to an integer
 * @i: String pointer
 *
 * Return: Positive or negative integer
 */

int _atoi(char *s)
{
	int i, x = 0, y = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			x = (s[i] - '0') + x * 10;

			if (s[i + 1] == ' ')
				break;
		}

		else if (s[i] == '-')
			y = y * -1;
	}
	return (x * y);
}