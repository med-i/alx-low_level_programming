#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array.
 * @c: the character to initialize the array with.
 *
 * Return: pointer to the array, otherwise NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	arr = malloc(size);
	if (!arr)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
