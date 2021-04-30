#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 *
 * @head: Doubly linked list.
 * @n: Value of the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *list;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	list = *head;
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head)
	{
		while (list->next != NULL)
			list = list->next;

		list->next = new_node;
		new_node->prev = list;
	}

	else
		*head = new_node;

	return (new_node);
}
