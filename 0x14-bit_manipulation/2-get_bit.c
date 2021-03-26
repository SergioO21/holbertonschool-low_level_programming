#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: Number.
 * @index: Index.
 *
 * Return: The value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (n > 1)
			n = n >> 1;

		else
			return (-1);
	}

	return (n & 1);
}
