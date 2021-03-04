#include "holberton.h"

/**
 * _calloc - Allocates memory for an array, using malloc.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size of elements in the array.
 *
 *
 * Return: If @nmemb or @size is 0, returns NULL.
 *         If fails, returns (0).
 *         Else, returns a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	ar = (char *) malloc(nmemb * size);

	if (ar == 0)
		return (0);

	for (i = 0; i < nmemb * size; i++)
		ar[i] = '\0';

	return (ar);
}
