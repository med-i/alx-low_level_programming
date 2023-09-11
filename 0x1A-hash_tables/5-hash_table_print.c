#include "hash_tables.h"

/**
 * hash_table_print - Prints the entire hash table.
 * @ht: The hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *current;
	char *delim = "";

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			printf("%s'%s': '%s'", delim, current->key, current->value);
			delim = ", ";
			current = current->next;
		}
	}
	printf("}\n");
}
