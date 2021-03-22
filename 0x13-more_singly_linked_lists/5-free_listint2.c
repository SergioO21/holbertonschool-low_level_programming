#include "lists.h"

/**
 * free_listint2 - Frees a list.
 *
 * @head: List head.
 */

void free_listint2(listint_t **head)
{
	listint_t *l, *p;

	l = *head;

	while (l != NULL)
	{
		p = l->next;
		free(l);
		l = p;
	}
}
