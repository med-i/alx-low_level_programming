#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in the hash table.
 * @ht: The hash table from which to retrieve the value.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if the key doesn't exist.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *current;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}

	return (NULL);
}
