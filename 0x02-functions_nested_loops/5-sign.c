#include "holberton.h"

/**
 * print_sign - main function
 * @n: number
 *
 * Description: [print_sign] Checks for positive or negative numbers
 * Return: If is a positive, negative or zero number,
 * returns 1, -1 or 0 respectively
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
