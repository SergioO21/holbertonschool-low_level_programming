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
	dlistint_t *list, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	list = *h;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		if (list)
		{
			(*h)->prev = new_node;
			new_node->next = *h;
		}
		*h = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!list)
			return (NULL);
		if (i != idx - 1 && list->next != NULL)
			list = list->next;
		else if (!list->next)
			list = list->next;
	}

	if (list->next)
		list->next->prev = new_node;

	new_node->prev = list;
	new_node->next = list->next;
	list->next = new_node;
	return (new_node);
}
