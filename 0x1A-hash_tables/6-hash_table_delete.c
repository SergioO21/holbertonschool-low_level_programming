#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: The hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *travel, *del;
	unsigned long int i = 0;

	travel = del = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			travel = ht->array[i];

			while (travel)
			{
				del = travel;
				travel = travel->next;
				free(del->key);
				free(del->value);
				free(del);
			}
		}
	}

	free(ht->array);
	free(ht);
	ht = NULL;
}
