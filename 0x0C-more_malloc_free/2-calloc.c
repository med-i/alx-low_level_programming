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
	void *ptr = malloc(nmemb * size);

	return (ptr);
}
