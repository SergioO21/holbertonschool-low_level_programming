#include "holberton.h"

/**
 * _abs - main function
 * @n: Number
 * Description: [int _abs] Checks for positive or negative numbers
 * Return: Absolute number
 */

int _abs(int n)
{

	if (n < 0)
	{
		n = n * -1;
		return (n);
	}

	else
	{
		return (n);
	}
}
