#include "holberton.h"

/**
 * compare - Compare if @n is divisible by @i.
 *
 * @n: Number.
 * @i: Tracking number.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int compare(int n, int i)
{
	if (n == i)
		return (1);

	else if (n % i == 0)
		return (0);

	return (compare(n, i + 1));
}

/**
 * is_prime_number - Write a function that returns 1 if the input
 *                   integer is a prime number, otherwise return 0.
 *
 * @n: Number.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	else
		return (compare(n, 2));
}
