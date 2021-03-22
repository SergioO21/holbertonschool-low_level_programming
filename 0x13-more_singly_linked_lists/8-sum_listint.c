#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a linked list.
 *
 * @head: List head.
 *
 * Return: The sum of all the data (n).
 *         If the list is empty, returns (0).
 */

int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum = 0;

	p = head;

	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
