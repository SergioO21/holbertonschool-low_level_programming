#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a linked list.
 *
 * @head: Doubly linked list.
 * @index: The index of the node that should be deleted.
 *         Index starts at 0.
 *
 * Return: (1) if it succeeded, (-1) if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int n_node;

	current = *head;
	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		for (n_node = 0; n_node < index; n_node++)
		{
			if (!current)
				return (-1);
			current = current->next;
		}
		if (!current)
			return (-1);

		if (!current->next)
		{
			current->prev->next = NULL;
			free(current);
			current = NULL;
			return (1);
		}
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
		current = NULL;
	}
	return (1);
}
