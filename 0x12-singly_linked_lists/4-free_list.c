#include "lists.h"

/**
 * free_list - Frees a list.
 *
 * @head: List.
 */

void free_list(list_t *head)
{
	list_t *p, *l;

	l = head;

	while (l != NULL)
	{
		p = l->next;
		free(l->str);
		free(l);
		l = p;
	}
}
