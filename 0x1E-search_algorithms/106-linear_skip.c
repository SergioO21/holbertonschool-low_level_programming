#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: - A pointer on the first node where value is located.
 *         - If @value is not present in array or
 *           if array is NULL, returns (NULL).
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = list;
	int express = 0;

	if (!list)
		return (NULL);
	while (tmp->next)
	{
		if (tmp->express)
		{
			tmp = tmp->express;
			printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);

			if (tmp->n >= value)
				break;
			express = tmp->index;
		}
		else
		{
			while (tmp->next)
				tmp = tmp->next;
		}
	}
	printf("Value found between indexes [%d] and [%ld]\n", express, tmp->index);
	tmp = list;

	while ((int)tmp->index != express)
		tmp = tmp->express;

	while (tmp)
	{
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);

		if (tmp->n == value)
			return (tmp);
		else if (tmp->n > value)
			break;
		tmp = tmp->next;
	}
	return (NULL);
}
