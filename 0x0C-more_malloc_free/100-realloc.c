#include "holberton.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size, in bytes.
 * @new_size: The new size, in bytes.
 *
 * Return: - If @new_size == @old_size do not do anything and return @ptr.
 *         - If @ptr is NULL, then the call is equivalent to malloc(@new_size).
 *         - If @new_size is equal to zero, and @ptr is not NULL,
 *           then the call is equivalent to free(@ptr). Return NULL.
 *         - Else, returns the new memory allocated.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	if (ptr == 0)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	str = (char *) malloc(new_size);
	free(ptr);

	return (str);
}
