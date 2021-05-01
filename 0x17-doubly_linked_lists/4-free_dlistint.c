#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head: Doubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
