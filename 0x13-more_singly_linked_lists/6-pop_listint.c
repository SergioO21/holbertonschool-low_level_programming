#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 *
 * @head: List head.
 *
 * Return: The head nodes data (n).
 *         If the linked list is empty return (0).
 */

int pop_listint(listint_t **head)
{
	listint_t *l;
	int i;

	l = *head;

	if (l == NULL)
		return (0);

	*head = l->next;

	i = l->n;

	free(l);

	return (i);
}
