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
	if (n >> index != 0)
		return ((n >> index) & 1);
	
	return (-1);
}
