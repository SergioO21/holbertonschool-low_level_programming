#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 *
 * @h: The list.
 *
 * Return: The number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *l = h;
	size_t i;

	for (i = 0; l != NULL; i++)
		l = l->next;

	return (i);
}
