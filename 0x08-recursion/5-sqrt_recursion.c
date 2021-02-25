#include "holberton.h"

/**
 * power - checks if an integer is the square root of a number.
 *
 *
 * @n: Parameter designing an integer.
 * @i: Integer.
 *
 * Return: Integer.
 */

int power(int n, int i)
{
	if (n == i * i)
		return (i);

	else if (i * i > n)
		return (-1);

	else
		return (power(n, i + 1));
}

/**
 * _sqrt_recursion - Write a function that returns
 *                   the natural square root of a number.
 *
 * @n: Number.
 *
 * Return: The natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	return (power(n, 1));
}
