#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: A pointer to the hash table.
 * @key: The key string. key cannot be an empty string.
 * @value: The value associated with the key. value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *temp;
	unsigned long index;

	if (!ht || !key || !*key)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}

	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
