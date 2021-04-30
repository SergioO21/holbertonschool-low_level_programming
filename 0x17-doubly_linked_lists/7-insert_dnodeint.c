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
	dlistint_t *list, *new_node, *next_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	list = *h;
	next_node = NULL;
	new_node->n = n;

	if (idx == 0)
	{
		(*h)->prev = new_node;
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;

		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!list)
			return (NULL);

		list = list->next;
	}

	if (list->next)
	{
		next_node = list->next;
		next_node->prev = new_node;
	}

	list->next = new_node;
	new_node->prev = list;
	new_node->next = next_node;
	return (new_node);
}
