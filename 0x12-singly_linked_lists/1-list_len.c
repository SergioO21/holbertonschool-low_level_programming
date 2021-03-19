#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 *
 * @h: List.
 *
 * Return: The number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	const list_t *l = h;
	size_t count;
	int i;

	count = 0;

	for (i = 0; l != NULL; i++)
	{
		count++;
		l = l->next;
	}

	return (count);
}
