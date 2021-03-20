#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list.
 *
 * @head: Head of list.
 * @str: String.
 *
 * Return: A new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;

	return (new);
}
