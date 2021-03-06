#include "lists.h"

/**
 * print_listint - Prints all the elements of a list.
 *
 * @h: The list.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *l;
	size_t count;
	int i;

	l = h;
	count = 0;

	if (l != NULL)
	{
		for (i = 0; l != NULL; i++)
		{
			printf("%d\n", l->n);
			l = l->next;

			count++;
		}
	}

	return (count);
}
