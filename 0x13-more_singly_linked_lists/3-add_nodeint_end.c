#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list.
 *
 * @head: List head.
 * @n: Integer.
 *
 * Return: The address of the new element,
 *         or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head != NULL)
	{
		while (l->next != NULL)
			l = l->next;

		l->next = new;
	}

	else
		*head = new;

	new->n = n;
	new->next = NULL;

	return (new);
}
