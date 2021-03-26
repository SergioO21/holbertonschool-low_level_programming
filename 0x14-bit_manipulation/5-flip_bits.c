#include "holberton.h"

int countSetBits(unsigned long int n);

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
	return (countSetBits(n ^ m));
}

/**
 * countSetBits - Returns the number of bits you would need
 *                to flip to get from one number to another.
 *
 * @n: Difference.
 *
 * Return: The number of bits you would need
 *         to flip to get from one number to another.
 */

int countSetBits(unsigned long int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}

	return (count);
}
