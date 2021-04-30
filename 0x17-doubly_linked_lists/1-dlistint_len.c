#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 *
 * @h: Doubly linked list.
 *
 * Return: The number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			counter++;
		}
	}

	return (counter);
}