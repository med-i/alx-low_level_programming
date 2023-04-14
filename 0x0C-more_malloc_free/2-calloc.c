#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the number of elements.
 * @size: the size of bytes.
 *
 * Return: pointer to the allocated memeory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
