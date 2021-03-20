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
	char *new_str = strdup(str);
	int i = 0;

	if (!head)
		return (NULL);

	if (!str)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (new_str[i] != '\0')
		i++;

	new->str = malloc(sizeof(char) * i);

	if (new->str == NULL)
		return (NULL);

	new->str = new_str;
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
