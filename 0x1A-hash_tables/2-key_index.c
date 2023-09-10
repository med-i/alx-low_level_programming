#include "hash_tables.h"

/**
 * key_index - Returns the index at which the key/value pair should be stored
 *             in the array of the hash table.
 * @key: The key string.
 * @size: The size of the array of the hash table.
 *
 * Return: The index in the array for the key/value pair.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
