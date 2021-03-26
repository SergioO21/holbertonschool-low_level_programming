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
	n = n >> index;

	if (n == 0)
		return (-1);

	return (n & 1);
}
