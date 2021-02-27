#include "holberton.h"

/**
 * _isalpha - main function
 * @c: Character
 *
 * Description: [_isalpha] Checks for lowercase or uppercase letters
 * Return: If is a lowercase or uppercase letter, return 1. Else, return 0
 */

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
