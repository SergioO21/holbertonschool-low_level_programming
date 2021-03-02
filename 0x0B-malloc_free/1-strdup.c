#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 *
 * @str: String given as a parameter.
 *
 * Return: If @str = NULL or insufficient memory was available,
 *         return (0), Else return @str2.
 *
 */

char *_strdup(char *str)
{
	int i;
	char *str2;

	str2 = malloc(sizeof(str));

	if (str == 0)
		return (0);

	else if (str2 == 0)
		return (0);

	else
	{
		for (i = 0; str[i] != '\0'; i++)
			str2[i] = str[i];

		return (str2);
	}
	free(str2);
}
