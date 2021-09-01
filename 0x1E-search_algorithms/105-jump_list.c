#include "search_algos.h"
#include <math.h>

int check_index(listint_t *list, size_t size, int value);

/**
 * jump_list - Searches for a value in a sorted list
 *             of integers using the Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: - The index where value is located.
 *         - If @value is not present in array or
 *           if array is NULL, returns (-1).
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump, final, high = 0;
	listint_t *tmp = list;

	if (!list)
		return (NULL);

	jump = sqrt(size);

	high = check_index(list, size, value);

	if (high >= (int)size)
		final = size - 1;
	else
		final = high;

	printf("Value found between indexes [%d] and [%d]\n", high - jump, final);

	while ((int)tmp->index != high - jump)
		tmp = tmp->next;

	while (tmp && (int)tmp->index <= final)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)tmp->index, tmp->n);

		if (tmp->n == value)
			return (tmp);

		else if (tmp->n > value)
			break;

		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * check_index - Searches for a value in a sorted list
 *             of integers using the Jump search algorithm.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: Highest index.
 */

int check_index(listint_t *list, size_t size, int value)
{
	listint_t *tmp = list;
	int jump, high = 0;

	jump = sqrt(size);

	while (high < (int)size && tmp->n < value)
	{
		high += jump;

		while (tmp && (int)tmp->index < high)
		{
			if (!tmp->next)
				printf("Value checked at index [%d] = [%d]\n", (int)tmp->index, tmp->n);

			tmp = tmp->next;
		}

		if (tmp)
			printf("Value checked at index [%d] = [%d]\n", (int)tmp->index, tmp->n);
		else
			break;
	}
	return (high);
}
