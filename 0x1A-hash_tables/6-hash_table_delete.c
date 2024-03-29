#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the entire hash table.
 * @ht: The hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *current, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp = current;
			current = current->next;

			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
