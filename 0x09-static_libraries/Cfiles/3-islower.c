#include "holberton.h"

/**
 * _islower - main function
 * @c: Character
 *
 * Description: [_islower] Checks for lowercase characters
 * Return: If is lowercase, return 1. Else, return 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
