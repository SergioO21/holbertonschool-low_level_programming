#include "lists.h"

size_t print_list(const list_t *h)
{
	const list_t *l = h;
	size_t count;

	for (count = 0; l != NULL; count++)
	{
		if (l->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%lu] %s\n", l->len, l->str);

		l = l->next;
	}
	return(count);
}
