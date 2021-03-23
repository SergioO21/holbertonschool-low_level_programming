#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: List head.
 * @idx: The index of the list where the new node should be added.
 * @n: Integer.
 *
 * Return: - The address of the new node or NULL if it failed.
 *         - If it is not possible to add the new node at index idx,
 *           do not add the new node and return NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *l, *p, *new;
	unsigned int i;

	if (!head || !idx || !n)
		return (NULL);
	
	l = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < idx; i++)
	{
		if (l == NULL)
			return (NULL);

		if (i == idx - 1)
			p = l;

		l = l->next;
	}

	p->next = new;
	new->n = n;
	new->next = l;

	return (new);
}
