#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 *
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: (1) if it succeeded, (0) otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index = 0;

	if (!key || !ht || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		for (new_node = ht->array[index]; new_node; new_node = new_node->next)
		{
			if (strcmp(new_node->key, key) == 0)
			{
				free(new_node->value);
				new_node->value = strdup(value);
				return (1);
			}
		}
	}

	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	ht->array[index] = new_node;

	return (1);
}
