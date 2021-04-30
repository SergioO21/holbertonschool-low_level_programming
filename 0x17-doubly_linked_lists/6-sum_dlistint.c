#include "lists.h"

/**
 * sum_dlistint - The sum of all the data (n) of a dlistint_t linked list.
 *
 * @head: Doubly linked list.
 *
 * Return: The sum of all the data.
 *         If the listis empty, return (0)..
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
