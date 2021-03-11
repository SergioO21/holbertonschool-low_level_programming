#include <stdio.h>

/**
 * array_iterator - executes a function given as a
 *                  parameter on each element of an array.
 *
 * @array: Array received as parameter.
 * @size: Array size.
 * @action: Calls the function received as a parameter.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action || size < 1)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
