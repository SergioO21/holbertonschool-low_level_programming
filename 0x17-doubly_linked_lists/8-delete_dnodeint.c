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
	dlistint_t *delete, *list, *prev_node;
	unsigned int i = 0;

	delete = NULL;
	list = *head;

	if (!*head)
		return (-1);

	if (index == 0 && *head)
	{
		printf("hola1\n");
		delete = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
	}

	else
	{
		for (i = 0; i < index; i++)
		{
			if (list)
				list = list->next;

			else
				return (-1);
		}

		delete = list;
		list = list->next;
		prev_node = delete->prev;
		prev_node->next = list;
		
		if (list)
			list->prev = prev_node;
	}

	if (delete)
	{
		printf("hola\n");
		free(delete);
		return (0);
	}

	return (-1);
}
