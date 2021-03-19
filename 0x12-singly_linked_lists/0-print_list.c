#include "lists.h"

/**
 * print_list - Prints all the elements of a list.
 *
 * @h: List.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	const list_t *l = h;
	size_t count;
	int i;

	count = 0;

	for (i = 0; l != NULL; i++)
	{
		if (l->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%lu] %s\n", l->len, l->str);

		l = l->next;
		count++;
	}
	return (count);
}
