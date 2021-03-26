#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to (0) at a given index.
 *
 * @n: Number.
 * @index: Index.
 *
 * Return: (1) if it worked, or (-1) if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(int) * 10)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
