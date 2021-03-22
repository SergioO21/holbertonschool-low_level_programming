#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 *
 * @head: List head.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node of a linked list.
 *         If the node does not exist, returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *l;
	unsigned int i;

	l = head;

	for (i = 0; i < index; i++)
	{
		if (l == NULL)
			return (NULL);

		l = l->next;
	}

	return (l);
}
