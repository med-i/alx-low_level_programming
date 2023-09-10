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
	char *c_value;
	unsigned long index;

	if (!ht || !key || !*key)
		return (0);

	c_value = strdup(value);
	if (!c_value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = c_value;
			return (1);
		}
		temp = temp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (!node->key)
	{
		free(c_value);
		free(node);
		return (0);
	}
	node->value = c_value;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
