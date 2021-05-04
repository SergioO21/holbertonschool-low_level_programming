#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 *
 * @h: Doubly linked list.
 * @idx: The index of the list where the new node should be added.
 *       Index starts at 0.
 * @n: Value of the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int n_nodes;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	current = *h;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		if (*h)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
	}
	else
	{
		for (n_nodes = 0; n_nodes < idx - 1; n_nodes++)
		{
			if (!current)
				return (NULL);
			current = current->next;
		}

		if (current->next)
		{
			new->next = current->next;
			current->next->prev = new;
		}
		new->prev = current;
		current->next = new;
	}
	return (new);
}
