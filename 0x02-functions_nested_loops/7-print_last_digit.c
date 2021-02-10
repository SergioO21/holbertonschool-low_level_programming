#include "holberton.h"

/**
 * print_last_digit - main function
 * @n: Number
 *
 * Description: [print_last_digit] Take the last digit of a number
 * Return: Last digit of a number
 */

int print_last_digit(int n)
{
	int f = n % 10;

	if (f < 0)
	{
		f = f * -1;
	}
	_putchar(f + '0');
	return (f);

}
