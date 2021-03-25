#include "holberton.h"

unsigned int _pow(unsigned int base, unsigned int exponent);

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: String of (0) and (1) chars.
 *
 * Return: The converted number.
 *
 *         If there is one or more chars in the string @b
 *         that is not (0) or (1) or @b is NULL, returns (0).
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value, j;
	int i = 0;

	value = j = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		i++;
	}

	i--;

	for (j = 0; i >= 0; j++, i--)
	{
		if (b[i] == '1')
			value += _pow(2, j);
	}

	return (value);
}

/**
 * _pow - Raises a number to the n power.
 *
 * @base: Base.
 * @exp: Exponent.
 *
 * Return: The result of the power.
 */

unsigned int _pow(unsigned int base, unsigned int exp)
{
	unsigned int power = base;

	if (exp == 0)
		return (1);

	for (; exp > 1; exp--)
		power = power * base;

	return (power);
}
