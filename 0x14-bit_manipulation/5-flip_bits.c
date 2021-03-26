#include "holberton.h"

/**
 * flip_bits - Returns the number of bits you would need
 *             to flip to get from one number to another.
 *
 * @n: First number.
 * @m: Second number.
 *
 * Return: The number of bits you would need
 *         to flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int value;
	int count = 0;

	value = n ^ m;

	while (value > 0)
	{
		if ((value & 1) == 1)
			count++;

		value >>= 1;
	}

	return (count);
}
