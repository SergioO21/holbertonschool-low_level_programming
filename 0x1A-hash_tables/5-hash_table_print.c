#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: The hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *travel = NULL;
	unsigned long int i = 0;
	char *coma  = "";

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			travel = ht->array[i];

			while (travel)
			{
				printf("%s'%s': '%s'", coma, travel->key, travel->value);
				coma = ", ";

				travel = travel->next;
			}
		}
	}
	printf("}\n");
}
