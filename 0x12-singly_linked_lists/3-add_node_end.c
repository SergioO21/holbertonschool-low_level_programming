#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list.
 *
 * @head: The list.
 * @str: String.
 *
 * Return: A new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *l = *head;
	int i = 0;

	if (!head || !str)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		while (l->next != NULL)
			l = l->next;

		l->next = new;
	}
	return (new);
}
