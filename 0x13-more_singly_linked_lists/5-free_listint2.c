#include "lists.h"

/**
 * free_listint2 - Frees a list.
 *
 * @head: List head.
 */

void free_listint2(listint_t **head)
{
	listint_t *l;

	if (!head)
		return;

	while (*head)
	{
		l = (*head)->next;

		free(*head);

		*head = l;
	}
}
