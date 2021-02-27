#include "holberton.h"

/**
 * _isdigit - Check if is a number from 0 - 9
 * @c: character to compare
 *
 * Return: if the character is uppercase, return 1, else return 0
 */

int _isdigit(int c)
{
	int i, a = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			a = 1;
	}
	return (a);
}
