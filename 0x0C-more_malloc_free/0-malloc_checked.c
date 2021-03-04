#include "holberton.h"

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: Size of memory to allocate.
 *
 * Return: A pointer to the allocated memory. If malloc fails,
 *         the function should cause normal process termination
 *         with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *re;

	re = (unsigned int *) malloc(b);

	if (re == 0)
		exit(98);

	return (re);
}
