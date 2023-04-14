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
	unsigned int i, tsz;
	char *ptr;

	tsz = nmemb * size;
	if (tsz == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < tsz; i++)
		ptr[i] = 0;

	return (ptr);
}
